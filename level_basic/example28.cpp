//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>
#include <QDateTime>

int main() {
    QTextStream out(stdout);
    QDateTime cdt = QDateTime::currentDateTime();
    out << "The current datetime is " << cdt.toString() << endl;
    out << "The current date is " << cdt.date().toString() << endl;
    out << "The current time is " << cdt.time().toString() << endl;
    return 0;
}