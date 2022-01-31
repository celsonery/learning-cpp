#include <iostream>
#include "Handler.hpp"

using namespace web;
using namespace http;
using namespace utility;
using namespace http::experimental::listener;
using namespace std;

unique_ptr<Handler> g_HttpHandler;

void on_init(const string_t& address) {
    uri_builder uri(address);

    auto addr = uri.to_uri().to_string();

    g_HttpHandler = unique_ptr<Handler>(new Handler(addr));
    g_HttpHandler->open().wait();

    ucout << utility::string_t(U("Listening for request at: ")) << addr << endl;
}

void on_shutdown() {
    g_HttpHandler->close().wait();
    return;
}

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
