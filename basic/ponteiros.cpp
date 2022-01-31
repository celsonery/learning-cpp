#include <iostream>

int main(int argc, char **argv) {

    std::cout << "Aula de ponteiros..." << std::endl;

    if (argc > 1) {

        for (arg : argv) {
            std::cout << "Argumento: " << arg << std::endl;
        }
        std::cout << "Primeiro argumento passado: " << argv[1] << std::endl;
    }
    return 0;
}