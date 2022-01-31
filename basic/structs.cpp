#include <iostream>

typedef struct cliente {
    int id;
    std::string nome;
    std::string email;
} t_cliente;

void showData(t_cliente cl) {
    std::cout << ":::: DADOS DO CLIENTE ::::" << std::endl;
    std::cout << "ID: " << cl.id;
    std::cout << " - Nome: " << cl.nome;
    std::cout << " - Email: " << cl.email << std::endl;
}

t_cliente getData() {
    t_cliente cl;

    std::cout << "Infome o nome do cliente: ";
    std::getline(std::cin, cl.nome);

    std::cout << "Infome o email do cliente: ";
    std::getline(std::cin, cl.email);

    std::cout << "Infome o ID do cliente: ";
    std::cin >> cl.id;

    return cl;
}

int main(int argc, char **argv) {
    std::cout << ":::: CADASTRO DE CLIENTES ::::" << std::endl;
    std::cout << std::endl;

    t_cliente cl_data;
    cl_data = getData();
    showData(cl_data);

    return 0;
}