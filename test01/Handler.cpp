#include "Handler.hpp"

using namespace std;
using namespace web;
using namespace utility;
using namespace http;
using namespace web::http::experimental::listener;

Handler::Handler(utility::string_t url) : m_listener(url) {
    m_listener.support(methods::GET, bind(&Handler::handle_get, this, placeholders::_1));
    m_listener.support(methods::PUT, bind(&Handler::handle_put, this, placeholders::_1));
    m_listener.support(methods::POST, bind(&Handler::handle_post, this, placeholders::_1));
}

void Handler::handle_get(http_request message) {
    ucout << "Handle get: " << message.to_string() << endl;

    auto paths = http::uri::split_path(http::uri::decode(message.relative_uri().path()));

    for (vector<utility::string_t>::iterator itr = paths.begin(); itr != paths.end(); itr++) {
        cout << *itr << endl;
    }

    if (paths.empty()) {
        message.reply(status_codes::OK, "{1:Namaste World!!!}");
        return;
    }

    message.reply(status_codes::OK, "{1:!!!Namaste World!!!");

    return;
}