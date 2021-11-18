//
// Created by qiang on 2021/11/18.
//

#include "Buttons.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Buttons w;
    w.resize(290, 170);
    w.setWindowTitle("Buttons");
    w.show();
    return QApplication::exec();
}