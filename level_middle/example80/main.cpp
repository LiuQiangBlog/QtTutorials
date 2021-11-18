//
// Created by qiang on 2021/11/18.
//

#include "Pixmap.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Pixmap w;
    w.setWindowTitle("QPixmap");
    w.show();
    return QApplication::exec();
}