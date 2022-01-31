#include <iostream>
#include <vector>
#include <algorithm>

void limpaCpf(std::string);

int main(int argc, char **argv) {
    std::string cpf = "123.456.789-00";

    std::cout << "CPF: " << cpf << std::endl;

    limpaCpf(cpf);

    return 0;

}

void limpaCpf(std::string cpf) {
    cpf.erase(std::remove(cpf.begin(), cpf.end(), '.'), cpf.end());
    cpf.erase(std::remove(cpf.begin(), cpf.end(), '-'), cpf.end());
    std::cout << cpf << std::endl;
}