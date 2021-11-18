//
// Created by qiang on 2021/11/16.
//

#include "SimpleMenu.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    SimpleMenu window;
    window.resize(350, 250);
    window.setWindowTitle("Simple menu");
    window.show();
    return QApplication::exec();
}