
//
// Created by qiang on 2021/11/18.
//

#include "FormLayout.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    FormLayout w;
    w.setWindowTitle("Form example");
    w.show();
    return QApplication::exec();
}