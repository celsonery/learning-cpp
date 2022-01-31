#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
    std::string linha;

    std::ifstream arq("arquivo.txt");

    if (arq.is_open()) {
        while (getline( arq, linha)) {
            std::cout << linha << std::endl;
        }

        arq.close();
    }

    return 0;
}