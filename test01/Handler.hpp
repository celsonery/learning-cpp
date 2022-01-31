#pragma once

#include "stdafx.hpp"
using namespace web;
using namespace http;
using namespace http::experimental::listener;

class Handler {
public:
    Handler() {}
    Handler(utility::string_t url);

    pplx::task<void> open() { return m_listener.open(); }
    pplx::task<void> close() { return m_listener.close(); }

private:
    void handle_get(http_request message);
    void handle_put(http_request message) { message.reply(status_codes::OK, "{PUT}"); }
    void handle_post(http_request message) { message.reply( status_codes::OK, "{POST}"); }

    http_listener m_listener;
};


