#include <iostream>

int main(int argc, char **argv) {
    std::string *p = nullptr;

    p = new std::string[5];

    std::cout << "Informe seu nome: ";
    std::getline(std::cin, *p);

    std::cout << "Olá: \u00A9 \e[32;4m" << *p << "\e[m \u00AE" << std::endl;

    delete[] p;
    p = NULL;

    return 0;

}