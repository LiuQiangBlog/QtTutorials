//
// Created by qiang on 2021/11/18.
//

#include "Skeleton.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Skeleton w;
    w.resize(450, 350);
    w.setWindowTitle("Application skeleton");
    w.show();
    return QApplication::exec();
}