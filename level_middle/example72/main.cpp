//
// Created by qiang on 2021/11/18.
//

#include "Slider.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Slider w;
    w.setWindowTitle("QSlider");
    w.show();
    return QApplication::exec();
}