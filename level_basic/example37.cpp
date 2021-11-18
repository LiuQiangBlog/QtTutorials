//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>
#include <QMap>

int main() {
    QTextStream out(stdout);
    QMap<QString, int> items = {{"coins", 5}, {"books", 3}};
    items.insert("bottles", 7);
    QList<int> values = items.values();
    out << "Values:" << endl;
    for (int val : values) {
        out << val << endl;
    }
    QList<QString> keys = items.keys();
    out << "Keys:" << endl;
    for (const QString& key : keys) {
        out << key << endl;
    }
    QMapIterator<QString, int> it(items);
    out << "Pairs:" << endl;
    while (it.hasNext()) {
        it.next();
        out << it.key() << ": " << it.value() << endl;
    }
    return 0;
}