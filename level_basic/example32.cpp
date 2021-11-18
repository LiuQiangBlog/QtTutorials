//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>
#include <QDateTime>
#include <ctime>

int main() {
    QTextStream out(stdout);
    time_t t = time(nullptr);
    out << t << endl;
    QDateTime dt;
    dt.setTime_t(t);
    out << dt.toString() << endl;
    QDateTime cd = QDateTime::currentDateTime();
    out << cd.toTime_t() << endl;
    return 0;
}