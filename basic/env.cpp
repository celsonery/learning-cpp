#include <iostream>
#include <cstdlib>

int main(int argc, char **argv) {
    std::string user;

    user = getenv("USER");

    std::cout << "Hello: "  << user << std::endl;

    std::cout << "Listagem: " << std::endl;
    system("ls");

    return 0;
}