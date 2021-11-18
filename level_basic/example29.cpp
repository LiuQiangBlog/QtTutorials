//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>
#include <QDate>

int main() {
    QTextStream out(stdout);
    QDate cd = QDate::currentDate();
    out << "Gregorian date for today: " << cd.toString(Qt::ISODate) << endl;
    out << "Julian day for today: " << cd.toJulianDay() << endl;
    return 0;
}