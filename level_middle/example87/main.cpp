//
// Created by qiang on 2021/11/18.
//

#include "Donut.h"
#include <QDesktopWidget>
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Donut w;
    w.resize(350, 280);
    w.setWindowTitle("Donut");
    w.show();
    return QApplication::exec();
}
