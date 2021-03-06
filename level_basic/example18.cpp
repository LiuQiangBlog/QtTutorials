//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>
#include <QDate>

int main() {
    QTextStream out(stdout);
    QDate dt1{2020, 4, 5};
    QDate dt2{2019, 4, 5};
    if (dt1 < dt2) {
        out << dt1.toString() << " comes before "
            << dt2.toString() << endl;
    } else {
        out << dt1.toString() << " comes after "
            << dt2.toString() << endl;
    }
    return 0;
}