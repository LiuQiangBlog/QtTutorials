//
// Created by qiang on 2021/11/18.
//

#include "Review.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Review w;
    w.setWindowTitle("Review");
    w.show();
    return QApplication::exec();
}