#include <iostream>
#include <ctime>

int main(int argc, char **argv) {

    time_t now = time(0);

    std::cout << "Now: " << ctime(&now) << std::endl;
    return 0;
}