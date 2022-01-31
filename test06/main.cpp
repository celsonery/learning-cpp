#include <Poco/Net/HTTPServer.h>
#include <Poco/Net/HTTPRequestHandler.h>
#include <Poco/Net/HTTPServerResponse.h>
#include <Poco/Util/Application.h>
#include <Poco/Util/ServerApplication.h>

using namespace Poco::Util;
using namespace Poco::Net;
using namespace Poco::Net;
#include <iostream>

class RequestHandler : public HTTPRequestHandler {
public:
    void handleRequest(HTTPServerRequest &req, HTTPServerResponse &res) {
        res.setContentType("text/plain");
        res.send() << "Hello, world!";
    }
};

class RequestHandlerFactory : public HTTPRequestHandlerFactory {
public:
    RequestHandler *createRequestHandler(const HTTPServerRequest &req) {
        return new RequestHandler;
    }
};

class Server : public ServerApplication {
protected:
    int main(const std::vector<std::string> &args) {
        constexpr unsigned short port = 8080;
        ServerSocket socket(port);
        HTTPServer server(new RequestHandlerFactory, socket, new HTTPServerParams);
        server.start();
        waitForTerminationRequest();
        server.stop();
        return Application::EXIT_OK;
    }
};

POCO_SERVER_MAIN(Server);