//
// Created by qiang on 2021/11/18.
//

#include "Shapes.h"
#include <QDesktopWidget>
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Shapes w;
    w.resize(350, 280);
    w.setWindowTitle("Shapes");
    w.show();
    return QApplication::exec();
}