//
// Created by qiang on 2021/11/18.
//

#include "Patterns.h"
#include <QDesktopWidget>
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Patterns w;
    w.resize(350, 280);
    w.setWindowTitle("Patterns");
    w.show();
    return QApplication::exec();
}
