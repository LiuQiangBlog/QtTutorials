//
// Created by qiang on 2021/11/18.
//

#include "Lines.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Lines w;
    w.resize(280, 270);
    w.setWindowTitle("Lines");
    w.show();
    return QApplication::exec();
}
