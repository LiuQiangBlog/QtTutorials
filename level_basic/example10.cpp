//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>

#define STR_EQUAL 0

int main() {
    QTextStream out(stdout);
    QString a {"Rain"};
    QString b {"rain"};
    QString c {"rain\n"};
    if (QString::compare(a, b) == STR_EQUAL) {
        out << "a, b are equal" << endl;
    } else {
        out << "a, b are not equal" << endl;
    }
    out << "In case insensitive comparison:" << endl;
    if (QString::compare(a, b, Qt::CaseInsensitive) == STR_EQUAL) {
        out << "a, b are equal" << endl;
    } else {
        out << "a, b are not equal" << endl;
    }
    if (QString::compare(b, c) == STR_EQUAL) {
        out << "b, c are equal" << endl;
    } else {
        out << "b, c are not equal" << endl;
    }
    c.chop(1); // Removes n characters from the end of the string.
    out << "After removing the new line character" << endl;
    if (QString::compare(b, c) == STR_EQUAL) {
        out << "b, c are equal" << endl;
    } else {
        out << "b, c are not equal" << endl;
    }
    return 0;
}