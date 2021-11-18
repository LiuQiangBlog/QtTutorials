//
// Created by qiang on 2021/11/18.
//

#include "Disconnect.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Disconnect w;
    w.resize(250, 150);
    w.setWindowTitle("Disconnect");
    w.show();
    return QApplication::exec();
}
