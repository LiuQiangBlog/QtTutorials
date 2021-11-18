//
// Created by qiang on 2021/11/18.
//

#include "Colours.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Colours w;
    w.resize(360, 280);
    w.setWindowTitle("Colours");
    w.show();
    return QApplication::exec();
}