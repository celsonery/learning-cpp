#pragma once

#include <string>
#include <memory>
#include "http/server.h"

using namespace std;

class WebServer {
public:
    WebServer();
    virtual ~WebServer();
    void start();
    void stop();

private:
    shared_ptr<Poco::Net::HTTPServer> m_http;
    shared_ptr<Poco::Net::HTTPServer> m_https;

    shared_ptr<Poco::Net::PrivateKeyPassphraseHandler> m_svConsoleHandler;
    shared_ptr<Poco::Net::InvalidCertificateHandler> m_svInvalidCertHandler;

    string m_serverKey;
    string m_serverCertificate;
    string m_caLocation;

};
