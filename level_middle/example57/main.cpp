//
// Created by qiang on 2021/11/18.
//

#include "Toolbar.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Toolbar w;
    w.resize(350, 250);
    w.setWindowTitle("QToolBar");
    w.show();
    return QApplication::exec();
}
