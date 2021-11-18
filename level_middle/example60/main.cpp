//
// Created by qiang on 2021/11/18.
//

#include "VerticalBox.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    VerticalBox w;
    w.resize(240, 230);
    w.setWindowTitle("VerticalBox");
    w.show();
    return QApplication::exec();
}
