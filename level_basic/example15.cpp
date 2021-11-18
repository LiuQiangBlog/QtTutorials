//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>
#include <QFile>

int main() {
    QTextStream out(stdout);
    QFile file("../level_basic/resource/program.c");
    if (!file.open(QIODevice::ReadOnly)) {
        qWarning("Cannot open file for reading");
        return -1;
    }
    QTextStream in(&file);
    QString allText = in.readAll();
    out << allText.toHtmlEscaped() << endl;
    file.close();
    return 0;
}