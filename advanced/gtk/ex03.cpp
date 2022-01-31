#include <gtkmm-3.0/gtkmm.h>

class myWindow : public Gtk::Window {
public:
    myWindow();
};

myWindow::myWindow() {
    set_title("Basic App");
//    set_default_size(200, 300);
}

int main(int argc, char **argv) {
    auto app = Gtk::Application::create("org.gtkmm.examples.base");

    return app->make_window_and_run<myWindow>(argc, argv);
}