#include <iostream>
#include <cstring>

// Exemplo de classe normal
class Stack {
    public:
        void pilha(const char *arr) {
            int i = 0;
            int max = strlen( arr );

            while ( i < max ) {
                std::cout << "Elemento: " << arr[i] << std::endl;
                i++;
            }
        }
};


int main() {
    Stack s;
    char marr[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    s.pilha( marr );

    return 0;
}