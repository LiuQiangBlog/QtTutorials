//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>
#include <QDir>

int main() {
    QTextStream out{stdout};
    out << "Current path:" << QDir::currentPath() << endl;
    out << "Home path:" << QDir::homePath() << endl;
    out << "Temporary path:" << QDir::tempPath() << endl;
    out << "Rooth path:" << QDir::rootPath() << endl;
    return 0;
}