//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>
#include <QList>

int main() {
    QTextStream out(stdout);
    QString string = "coin, book, cup, pencil, clock, bookmark";
    QStringList items = string.split(",");
    QStringListIterator it(items);
    while (it.hasNext()) {
        out << it.next().trimmed() << endl; // trimmed used for filtering space
    }
    return 0;
}
