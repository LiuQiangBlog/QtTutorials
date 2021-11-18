//
// Created by qiang on 2021/11/18.
//

#include "ListWidget.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    ListWidget w;
    w.setWindowTitle("QListWidget");
    w.show();
    return QApplication::exec();
}

