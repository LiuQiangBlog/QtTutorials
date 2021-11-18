//
// Created by qiang on 2021/11/18.
//

#include "TransparentRectangles.h"
#include <QDesktopWidget>
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    TransparentRectangles w;
    w.resize(630, 90);
    w.setWindowTitle("Transparent rectangles");
    w.show();
    return QApplication::exec();
}