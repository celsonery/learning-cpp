#include <iostream>

// Classe como Template
template <class T>
class Stack {
    public:
        void pilha(T arr, int max) {
            int i = 0;

            while ( i < max ) {
                std::cout << "Elemento: " << arr[i] << std::endl;
                i++;
            }
        }
};


int main() {
    // Chama como array de char
    Stack<const char*> s;
    char marr[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    int max = sizeof( marr ) / sizeof( marr[0] );
    s.pilha( marr, max );

    Stack<const std::string*> s2;
    std::string marr2[] = {"C", "C++", "Rust", "Java", "PHP"};
    int max2 = sizeof( marr2 ) / sizeof( marr2[0] );
    s2.pilha( marr2, max2 );

    Stack<const int*> s3;
    int marr3[] = {1,2,3,4,5};
    int max3 = sizeof( marr3 ) / sizeof( marr3[0] );
    s3.pilha( marr3, max3 );

    return 0;
}