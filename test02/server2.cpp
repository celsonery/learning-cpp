#include "Poco/Net/NetException.h"
#include "Poco/Net/SocketAddress.h"
#include "Poco/Net/SocketStream.h"
#include "Poco/Net/StreamSocket.h"
#include "Poco/Types.h"

#include <cstdlib>
#include <iostream>
#include <string>

using namespace Poco::Net;

class CameraServer {
    public:
        CameraServer(const std::string ip = "127.0.0.1", Poco::UInt16 port = 8080) try :
            _address(ip, port), _socket(_address), _data_stream(_socket) {
            std::cout << "Starting network connection on %s:%s\n", this->_address.host(), this->_address.port();
        } catch (ConnectionRefusedException err) {
            std::cerr << err.displayText() << std::endl;
            std::exit(EXIT_FAILURE);
        };

        virtual ~CameraServer() {
            std::cout << "Closing server broadcasting on %s\n", _address.host().toString();
        }

        void sendTest() {
            this->_data_stream <<
                "HTTP/1.0 200 OK\r\n"
                "Content-Type: text/html\r\n"
                "\r\n"
                "<html><head><title>Simple test</title></head>"
                "<body><h1>Hello, world!</h1></body></html>"
            << std::flush;
        }
		
        enum BroadcastType {
            clean,
            tracked,
            filtered
        };
	
	private:
        Poco::Net::SocketAddress _address;
        Poco::Net::StreamSocket _socket;
        Poco::Net::SocketStream _data_stream;
};