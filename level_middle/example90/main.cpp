//
// Created by qiang on 2021/11/18.
//

#include "RadialGradient.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    RadialGradient w;
    w.resize(300, 250);
    w.setWindowTitle("Radial gradient");
    w.show();
    return QApplication::exec();
}