//
// Created by qiang on 2021/11/18.
//

#include "Timer.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Timer w;
    w.resize(250, 150);
    w.setWindowTitle("Timer");
    w.show();
    return QApplication::exec();
}