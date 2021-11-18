//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>
#include <QTime>

int main() {
    QTextStream out(stdout);
    QTime ct = QTime::currentTime();
    out << "The time is " << ct.toString("hh:mm:ss.zzz") << endl;
    out << "The time is " << ct.toString("h:m:s a") << endl;
    out << "The time is " << ct.toString("H:m:s A") << endl;
    out << "The time is " << ct.toString("h:m AP") << endl;
    return 0;
}