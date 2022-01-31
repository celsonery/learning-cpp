#include <iostream>

class Hello {
public:
    void hello_world() {
        std::cout << "Hello, World!" << std::endl;
    }
};

int main() {

    Hello hl;

    hl.hello_world();

    return 0;
}
