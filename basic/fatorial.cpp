#include <iostream>

long int fatorial(long int);

int main(int argc, char **argv) {
    if ( argc > 1) {
        long int val = atoi(argv[1]);
        std::cout << "O fatorial de " << val<< " é " << fatorial(val) << std::endl;
    } else {
        std::cout << "Use: " << argv[0] << " + um número" << std::endl;
    }
    return 0;
}

long int fatorial(long int num) {
    return (num <= 1) ? 1 : num * fatorial(num - 1);
}