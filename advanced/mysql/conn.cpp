#include <iostream>
#include <mysql/mysql.h>

int main(int argc, char **argv) {

    MYSQL *conn;
    conn = mysql_init(NULL);

    if(!conn) {
        std::cout << "Mysq nao encontrado!" << std::endl;
    }

    conn = mysql_real_connect(conn, "10.0.10.115", "serviceuser", "su2012..", "testando", 0, NULL, 0);

    if (conn) {
        std::cout << "Conectado com sucesso!" << std::endl;
    } else {
        std::cout << "Falha ao conectar ao Mysql" << std::endl;
    }

    mysql_close(conn);

    return 0;
}