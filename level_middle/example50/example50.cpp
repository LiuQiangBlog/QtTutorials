//
// Created by qiang on 2021/11/15.
//

#include <QApplication>
#include <QWidget>
#include <QDesktopWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;
    window.resize(350, 250);
    window.setWindowTitle("ToolTip");
    window.setToolTip("QWidget");
    window.show();
    auto parent = QApplication::desktop();
    window.move((parent->width() - window.width())/2, (parent->height() - window.height())/2);
    return QApplication::exec();
}