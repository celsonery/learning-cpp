#pragma once

#include "MyRequestHandler.hpp"
#include <Poco/Net/HTTPRequestHandlerFactory.h>

using namespace Poco::Net;

class MyRequestHandlerFactory : public HTTPRequestHandlerFactory {
public:
    virtual HTTPRequestHandler *createRequestHandler(const HTTPServerRequest &) {
        return new MyRequestHandler;
    }
};