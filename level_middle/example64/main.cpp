
//
// Created by qiang on 2021/11/18.
//

#include "Calculator.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Calculator w;
    w.setWindowTitle("Calculator");
    w.show();
    return QApplication::exec();
}
