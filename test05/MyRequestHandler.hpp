#pragma once

#include <Poco/Net/HTTPRequestHandler.h>
#include <Poco/Net/HTTPServerRequest.h>
#include <Poco/Net/HTTPServerResponse.h>


#include <iostream>

using namespace Poco::Net;

class MyRequestHandler : public Poco::Net::HTTPRequestHandler {
public:
    virtual void handleRequest(Poco::Net::HTTPServerRequest &request, Poco::Net::HTTPServerResponse &response) {
        response.setStatus(HTTPResponse::HTTP_OK);
        response.setContentType("text/html");

        std::ostream &out = response.send();
        out << "<h1>Teste</h1>"
            << "<p>Host: " << request.getHost() << "</p>"
            << "<p>Method: " << request.getURI() << "</p>";
        out.flush();

        std::cout   << std::endl
                    << "Response sent for URI = " << request.getURI() << std::endl;
    }

private:
    static int count;

};