#include <iostream>

constexpr long int fib(int n) {
    return (n <= 1 ) ? n : fib( n - 1) + fib( n - 2 );
}

int main() {
    long int res = fib(30);
    std::cout << "O Fibonacci de 30 é: " << res << std::endl;
    return 0;
}