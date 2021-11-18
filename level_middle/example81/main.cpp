//
// Created by qiang on 2021/11/18.
//

#include "Splitter.h"
#include <QDesktopWidget>
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Splitter w;
    w.resize(350, 300);
    w.setWindowTitle("QSplitter");
    w.show();
    return QApplication::exec();
}
