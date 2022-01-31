#include <iostream>

class Pessoa {
public:
    void showName() {
        std::cout << "Celso Nery" << std::endl;
    }
};

class Idiomas : public Pessoa{
public:
    void showIdiomas(){
        std::cout << "Portugues Brasil" << std::endl;
    }
};

int main() {
    Idiomas idiomas;
    idiomas.showName();

    return 0;
}