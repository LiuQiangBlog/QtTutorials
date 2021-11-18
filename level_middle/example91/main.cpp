//
// Created by qiang on 2021/11/18.
//

#include "Puff.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Puff w;
    w.resize(350, 280);
    w.setWindowTitle("Puff");
    w.show();
    return QApplication::exec();
}