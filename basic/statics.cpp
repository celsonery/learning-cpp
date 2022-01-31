#include <iostream>

void incrementPrint() {
    static int value {0};
    value++;
    std::cout << "Valor: " << value << std::endl;
}

int main(int argc, char **argv) {
    incrementPrint();
    incrementPrint();
    incrementPrint();
    return 0;
}