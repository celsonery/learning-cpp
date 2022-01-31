#include <iostream>

int main(int argc, char **argv) {

    // Estrutura "WHILE"
    int i = 1;

    while ( i <= 10 ) {
        std::cout << "Valor de I: " << i << std::endl;
        i++;
    }

    // Estrutura "DO WHILE"
    int j = 0;

    do {
        std::cout << "Valor de J: " << j << std::endl;
        j++;
    } while (j <= 10);

    // Loop FOR
    for (int x = 1; x <= 10; x++) {
        std::cout << "Valor de X: " << x << std::endl;
    }

    // Loop FOR-Range ( ForEach em outras linguagens )
    std::string nomes[] = {"Celso", "Cristiane", "Evelyn", "Micaelly"};
    for (auto nome : nomes) {
        std::cout << "Pessoa: " << nome << std::endl;
    }


    return 0;
}