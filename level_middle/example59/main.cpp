//
// Created by qiang on 2021/11/18.
//

#include "Absolute.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Absolute w;
    w.setWindowTitle("Absolute");
    w.show();
    return QApplication::exec();
}
