#include <gtkmm-3.0/gtkmm.h>

int main(int argc, char **argv) {

    Gtk::Main kit(argc, argv);
    Gtk::Window win;

    // Configurando a janela
    win.set_default_size(600, 400);
    win.set_title("Meu primeiro programa Gtkmm");

    // Criando um label
    Gtk::Label lbl;
    lbl.set_text("Meu Label");

    // Adicionando o label a janela principal
    win.add_label("Teste");

    // Montar toda a janela


    Gtk::Main::run(win);

    return 0;
}
// COMPILE: g++ ex01.cpp -o ex01 $(pkg-config gtkmm-3.0 --cflags --libs)