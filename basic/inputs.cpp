#include <iostream>
#include <string>

int main() {
    std::string nome {};

    std::cout << "Informe seu nome: ";
    std::cin >> nome;

    std::cout << "Bem-vindo " << nome << std::endl;

    return 0;
}

