#pragma once

#include <string>
#include <vector>
#include <Poco/Net/HTTPServer.h>
#include <Poco/Util/ServerApplication.h>
#include "MyRequestHandlerFactory.hpp"

using namespace Poco::Util;

class MyServerApp : public ServerApplication {
protected:
    int main(const std::vector<std::string> &) {
        HTTPServer s(new MyRequestHandlerFactory, ServerSocket(9090), new HTTPServerParams);

        s.start();
        std::cout << std::endl << "Server Started..." << std::endl;

        waitForTerminationRequest();

        std::cout << std::endl << "Shutting down..." << std::endl;
        s.stop();

        return Application::EXIT_OK;
    }
};