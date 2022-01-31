#include "webserver.h"

WebServer::WebServer():
    m_svConsoleHandler(new KeyConsoleHandler(true)),
    m_svInvalidCertHandler(new ConsoleCertificateHandler(true)),
    m_serverKey("cert/server.key"),
    m_serverCertificate("cert/server.crt"),
    m_caLocation("cert/ca.crt")  {

   if(HttpPort > 0) {
        m_http.reset(
                new Poco::Net::HTTPServer(
                        new myRequestHandlerFactory,
                        Poco::Net::ServerSocket(cmsHttpPort),
                        new Poco::Net::HTTPServerParams
                )
        );
    }

    if(HttpsPort > 0) {

        /* From : http://schneide.wordpress.com/2011/02/07/ssl-with-poco/
           If you try to instantiate a Context with a privateKey file in order
           to provide it as argument to the initialize… method,
           a PrivateKeyPassphraseHandler might be needed.
           This handler is fetched from the SSLManager singleton
           – which you are just about to initialize!.

           This circular dependency between Context and SSLManager can be
           overcome e.g. if you call SSLManager::initializeServer first only
           with a PrivateKeyPassphraseHandler, a InvalidCertificateHandler
           and null Context pointer. Then instantiate the Context and call
           SSLManager::initializeServer again.
         */

        SSLManager::instance().initializeServer(
                m_svConsoleHandler.get(),
                m_svInvalidCertHandler.get(),
                nullptr);

        Context::Ptr serverContext = new Context(
                Context::SERVER_USE,
                m_serverKey,
                m_serverCertificate,
                m_caLocation);

        SSLManager::instance().initializeServer(
                m_svConsoleHandler.get(),
                m_svInvalidCertHandler.get(),
                serverContext);

        m_https.reset(
                new Poco::Net::HTTPServer(
                        new myRequestHandlerFactory,
                        Poco::Net::SecureServerSocket(HttpsPort),
                        new Poco::Net::HTTPServerParams
                )
        );

        start();
    }

}

WebServer::~WebServer() {
    stop();
}

void WebServer::start() {
    m_http->start();
    m_https->start();
}

void WebServer::stop() {
    if(m_http.use_count()) {
        m_http->stop();
    }
    if(m_https.use_count()) {
        m_https->stop();
    }
}