//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>
#include <QDateTime>

int main() {
    QTextStream out(stdout);
    QDateTime cdt = QDateTime::currentDateTime();
    out << "Universal datetime: " << cdt.toUTC().toString() << endl;
    out << "Local datetime: " << cdt.toLocalTime().toString() << endl;
    return 0;
}