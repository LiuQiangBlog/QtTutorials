//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>
#include <QFileInfo>
#include <QDir>

int main(int argc, char *argv[]) {
    QTextStream out{stdout};
    if (argc != 2) {
        qWarning("Usage: list_dir directory");
        return 1;
    }
    QString directory = argv[1];
    QDir dir{directory};
    if (!dir.exists()) {
        qWarning("The directory does not exist");
        return 1;
    }
    dir.setFilter(QDir::Files | QDir::AllDirs);
    dir.setSorting(QDir::Size | QDir::Reversed);
    QFileInfoList list = dir.entryInfoList();
    int max_size = 0;
    for (const QFileInfo& finfo: list) {
        QString name = finfo.fileName();
        int size = name.size();
        if (size > max_size) {
            max_size = size;
        }
    }
    int len = max_size + 2;
    out << QString("Filename").leftJustified(len).append("Bytes") << endl;
    for (const auto& fileInfo : list) {
        QString str = fileInfo.fileName().leftJustified(len);
        str.append(QString("%1").arg(fileInfo.size()));
        out << str << endl;
    }
    return 0;
}