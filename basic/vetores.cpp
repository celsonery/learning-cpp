#include <iostream>
#include <vector>

int main(int argc, char **argv) {

    std::vector<std::string> langs = {"Bash", "C", "C++", "Php", "Java", "Go", "Rust"}; // Cria o Vetor
    std::vector<std::string>::iterator inicio = langs.begin(); // Pega o primeiro elemento

    langs.pop_back(); // Remove o ultimo elemento '\0' para poder usar o .end()

    std::vector<std::string>::iterator fim = langs.end(); // pega o ultimo elemento do vetor

    langs.push_back("JavaScript"); // Adiciona ao final do vetor o elemento

    std::cout << "Primeiro: " << *inicio << std::endl;

    for (auto lang: langs) {
        std::cout << "Lang: " << lang << std::endl;
    }

    std::cout << "Último: " << *fim << std::endl;

    // Mostra o tamanho do vetor
    std::cout << "Tamanho do vetor: " << langs.size() << std::endl;

    return 0;
}