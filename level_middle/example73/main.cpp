//
// Created by qiang on 2021/11/18.
//

#include "ComboBoxEx.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    ComboBoxEx w;
    w.resize(300, 150);
    w.setWindowTitle("QComboBox");
    w.show();
    return QApplication::exec();
}
