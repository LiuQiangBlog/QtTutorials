//
// Created by qiang on 2021/11/18.
//

#include "ProgressBar.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    ProgressBar w;
    w.resize(250, 150);
    w.setWindowTitle("QProgressBar");
    w.show();
    return QApplication::exec();
}
