#include <iostream>
#include <mysql/mysql.h>

int main(int argc, char **argv) {

    MYSQL *conn;
    conn = mysql_init(NULL);
    conn = mysql_real_connect(conn, "10.0.10.115", "serviceuser", "su2012..", "testando", 0, NULL, 0);

    MYSQL_RES *res;
    MYSQL_ROW row;

    mysql_query(conn, "select * from micaelly");
    res = mysql_store_result(conn);

    while ((row = mysql_fetch_row(res)) != NULL) {
        std::cout << row[0] << " - " << row[1] << std::endl;
    }

    mysql_close(conn);

    return 0;
}