//
// Created by qiang on 2021/11/18.
//

#include "Click.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Click w;
    w.resize(250, 150);
    w.setWindowTitle("Click");
    w.show();
    return QApplication::exec();
}