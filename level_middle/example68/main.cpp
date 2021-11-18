//
// Created by qiang on 2021/11/18.
//

#include "Move.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Move w;
    w.resize(250, 150);
    w.setWindowTitle("Move");
    w.show();
    return QApplication::exec();
}