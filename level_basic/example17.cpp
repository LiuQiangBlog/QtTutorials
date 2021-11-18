//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>
#include <QTime>
#include <QDate>

int main() {
    QTextStream out(stdout);
    QDate cd = QDate::currentDate();
    QTime ct = QTime::currentTime();
    out << "Current date is: " << cd.toString() << endl;
    out << "Current time is: " << ct.toString() << endl;
    return 0;
}