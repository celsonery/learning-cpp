#include <iostream>

long int fibonacci(long int);

int main(int argc, char **argv) {
    if ( argc > 1) {
        long int val = atoi(argv[1]);
        std::cout << "A seguencia de fibonacci de " << val << " é " << std::endl;

        int i = 0;

        while (i < val) {
            std::cout << ' ' << fibonacci(i);
            i++;
        }
        std::cout << std::endl;
    } else {
        std::cout << "Use: " << argv[0] << " + um número" << std::endl;
    }
    return 0;
}

long int fibonacci(long int num) {
    return (num <= 1) ? 1 : fibonacci(num - 1) + fibonacci(num - 2);
}