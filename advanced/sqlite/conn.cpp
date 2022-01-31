#include <iostream>
#include <sqlite3.h>

int main(int argc, char **argv) {

    sqlite3 *db;
    bool conn = sqlite3_open("database.db", &db);

    if (conn) {
        std::cerr << "Erro ao conectar" << sqlite3_errmsg(db) << std::endl;
    } else {
        std::cout << "Conecxão OK" << std::endl;
        sqlite3_close(db);
    }
    return 0;
}