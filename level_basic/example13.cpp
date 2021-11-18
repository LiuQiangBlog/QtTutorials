//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>

int main() {
    QTextStream out(stdout);
    QString str { "Lovely" };
    str.append(" season");
    out << str << endl;
    str.remove(10, 3);
    out << str << endl;
    str.replace(7, 3, "girl");
    out << str << endl;
    str.clear();
    if (str.isEmpty()) {
        out << "The string is empty" << endl;
    }
    return 0;
}