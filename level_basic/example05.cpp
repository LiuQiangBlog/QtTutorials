//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>

int main() {
    QTextStream out(stdout);
    QString a {"Eagle"};
    out << a[0] << endl;
    out << a[4] << endl;
    out << a.at(0) << endl;
//    if (a.at(5).isNull()) {
//        out << "Outside the range of the string" << endl;
//    }
    return 0;
}