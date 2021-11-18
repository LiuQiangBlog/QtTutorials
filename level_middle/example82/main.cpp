//
// Created by qiang on 2021/11/18.
//

#include "Table.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Table w;
    w.resize(400, 250);
    w.setWindowTitle("QTableWidget");
    w.show();
    return QApplication::exec();
}
