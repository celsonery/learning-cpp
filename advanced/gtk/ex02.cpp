#include <iostream>
#include <gtkmm-3.0/gtkmm.h>

Gtk::Window *win;
Gtk::Button *btn_ch1, *btn_ch2, *btn_ch3, *btn_ch4, *btn_ch5;

int main(int argc, char **argv) {
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.examples.ex02");
    auto build = Gtk::Builder::create();

    build->add_from_file("jan01.glade");
    build->get_widget("win01", win);

    if (win) {
        build->get_widget("btn_ch1", btn_ch1);
    }

    if (btn_ch1) {
        btn_ch1->signal_clicked().connect(sigc::ptr_fun(on_btn_ch1_clicked));
    }

    app->run(*win);

    delete win;

    return 0;
}
// COMPILE:  g++ ex02.cpp $(pkg-config gtkmm-3.0 --cflags --libs) -export-dynamic