//
// Created by qiang on 2021/11/18.
//

#include "Statusbar.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Statusbar w;
    w.resize(300, 200);
    w.setWindowTitle("QStatusBar");
    w.show();
    return QApplication::exec();
}

