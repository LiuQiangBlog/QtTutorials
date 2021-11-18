//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>

int main() {
    QTextStream out(stdout);
    QString str{"There are many stars."};
    for (QChar qc : str) {
        out << qc << " ";
    }
    out << endl;
    for (QChar *it = str.begin(); it != str.end(); ++it) {
        out << *it << " " ;
    }
    out << endl;
    for (int i = 0; i < str.size(); ++i) {
        out << str[i] << " ";
    }
    out << endl;
    return 0;
}