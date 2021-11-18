//
// Created by qiang on 2021/11/15.
//

#include <QApplication>
#include <QWidget>
#include <QDesktopWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget w;
    w.resize(250, 150);
    w.setWindowTitle("Simple example");
    w.show();
    auto parent = QApplication::desktop();
    w.move((parent->width() - w.width()) / 2, (parent->height() - w.height()) / 2);
    return QApplication::exec();
}