//
// Created by qiang on 2021/11/18.
//

#include "KeyPress.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    KeyPress w;
    w.resize(250, 150);
    w.setWindowTitle("Key press");
    w.show();
    return QApplication::exec();
}