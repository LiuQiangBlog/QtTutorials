//
// Created by qiang on 2021/11/18.
//

#include "SpinBox.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    SpinBox w;
    w.resize(250, 150);
    w.setWindowTitle("QSpinBox");
    w.show();
    return QApplication::exec();
}