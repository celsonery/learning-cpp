#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
    std::string conteudo = "lorem ipsum";

    std::ofstream arq("arquivo.txt", std::ios_base::app);

    arq << conteudo << std::endl;

    arq.close();

    return 0;
}