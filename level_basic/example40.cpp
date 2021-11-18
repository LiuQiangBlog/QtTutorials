//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>
#include <QFile>

int main() {
    QTextStream out{stdout};
    QFile f{"../level_basic/resource/words.txt"};
    if (!f.open(QIODevice::ReadOnly)) {
        qWarning("Cannot open file for reading");
        return 1;
    }
    QTextStream in{&f};
    while (!in.atEnd()) {
        QString line = in.readLine();
        out << line << endl;
    }
    return 0;
}