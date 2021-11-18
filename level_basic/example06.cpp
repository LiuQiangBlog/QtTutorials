//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>

int main() {
    QTextStream out(stdout);
    QString s1 = "Eagle";
    QString s2 = "Eagle\n";
    QString s3 = "Eagle ";
    QString s4 = "орел"; // This string consists of Russian letters
    out << s1.length() << endl;
    out << s2.length() << endl;
    out << s3.length() << endl;
    out << s4.length() << endl;
    return 0;
}