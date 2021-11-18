//
// Created by qiang on 2021/11/18.
//

#include "LinearGradients.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    LinearGradients w;
    w.resize(350, 260);
    w.setWindowTitle("Linear gradients");
    w.show();
    return QApplication::exec();
}
