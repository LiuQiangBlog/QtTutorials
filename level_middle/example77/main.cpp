//
// Created by qiang on 2021/11/18.
//

#include "CheckBox.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    CheckBox w;
    w.resize(250, 150);
    w.setWindowTitle("QCheckBox");
    w.show();
    return QApplication::exec();
}