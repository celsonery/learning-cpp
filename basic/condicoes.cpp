#include <iostream>

int main() {
    int num{0};

    std::cout << "Informe um número: ";
    std::cin >> num;

    // Estrutura "IF"
    if (num == 0) {
        std::cout << "O número infomado foi 0" << std::endl;

        exit(0);
    }

    // Estrutura "IF - ELSE IF - ELSE"
    if ( num == 1) {
        std::cout << "O número infomado foi 1" << std::endl;
        exit(0);
    } else if ( num == 2) {
        std::cout << "O número infomado foi 2" << std::endl;
        exit(0);
    } else {
        std::cout << "O número infomado foi maior que 2 no IF passando para o switch..." << std::endl;
    }

    // Estrutura Switch
    switch (num) {
        case 3:
            std::cout << "O número infomado foi 3 no Switch" << std::endl;
            break;
        case 4:
            std::cout << "O número infomado foi 4 no Switch" << std::endl;
            break;
        case 5:
            std::cout << "O número infomado foi 5 no Switch" << std::endl;
            break;
        default:
            std::cout << "O número infomado foi maior que 5 no Switch" << std::endl;
    }

    std::cout << "Fim do programa" << std::endl;

    return 0;
}

