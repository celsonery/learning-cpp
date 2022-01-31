#include <iostream>
#include <pqxx/pqxx>

int main(int argc, char **argv) {
    try {
        pqxx::connection conn("dbname = db_pdv user = dev password = 123 hostaddr = 10.0.10.161 port = 5432");

        if (conn.is_open()) {
            std::cout << "Conectado ao database: " << conn.dbname() << std::endl;
        } else {
            std::cout << "Erro ao conectar ao database" << std::endl;
            return 1;
        }

        conn.disconnect();
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
}