#include <iostream>

enum Cores {
    red,
    green,
    blue,
    yellow
};

int main(int argc, char **argv) {
    Cores cor;

    std::cout << "Red é: " << red << std::endl;
    std::cout << "Green é: " << green << std::endl;
    std::cout << "Blue é: " << blue << std::endl;
    std::cout << "Yellow é: " << yellow << std::endl;
    return 0;
}