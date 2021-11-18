//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>
#include <QDate>

int main() {
    QTextStream out(stdout);
    QDate born(1992, 11, 2);
    QDate current = QDate::currentDate();
    int j_born = born.toJulianDay();
    int j_current = current.toJulianDay();
    out << "Days since born: " << j_current - j_born << endl;
    return 0;
}