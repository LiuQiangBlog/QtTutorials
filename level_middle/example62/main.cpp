//
// Created by qiang on 2021/11/18.
//

#include "Layouts.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Layouts w;
    w.setWindowTitle("Layouts");
    w.show();
    return QApplication::exec();
}