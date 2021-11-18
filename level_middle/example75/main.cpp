//
// Created by qiang on 2021/11/18.
//

#include "Ledit.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Ledit w;
    w.setWindowTitle("QLineEdit");
    w.show();
    return QApplication::exec();
}