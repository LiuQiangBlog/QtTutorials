//
// Created by qiang on 2021/11/18.
//

#include "Label.h"
#include <QApplication>
#include <QTextStream>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Label w;
    w.setWindowTitle("QLabel");
    w.show();
    return QApplication::exec();
}