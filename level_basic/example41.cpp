//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>
#include <QFile>

int main() {
    QTextStream out{stdout};
    QString filename = "../level_basic/resource/distros.txt";
    QFile f{filename};
    if (f.open(QIODevice::WriteOnly)) {
        QTextStream ss{&f};
        ss << "Xubuntu" << endl;
        ss << "Arch" << endl;
        ss << "Debian" << endl;
        ss << "Redhat" << endl;
        ss << "Slackware" << endl;
    } else {
        qWarning("Could not open file");
    }
    return 0;
}