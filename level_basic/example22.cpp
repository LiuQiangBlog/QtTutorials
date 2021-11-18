//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>
#include <QTime>

int main() {
    QTextStream out(stdout);
    QTime ct = QTime::currentTime();
    out << "The time is " << ct.toString(Qt::TextDate) << endl;
    out << "The time is " << ct.toString(Qt::ISODate) << endl;
    out << "The time is " << ct.toString(Qt::SystemLocaleShortDate) << endl;
    out << "The time is " << ct.toString(Qt::SystemLocaleLongDate) << endl;
    out << "The time is " << ct.toString(Qt::DefaultLocaleShortDate) << endl;
    out << "The time is " << ct.toString(Qt::DefaultLocaleLongDate) << endl;
    out << "The time is " << ct.toString(Qt::SystemLocaleDate) << endl;
    out << "The time is " << ct.toString(Qt::LocaleDate) << endl;
    return 0;
}