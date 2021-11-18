//
// Created by qiang on 2021/11/16.
//

#include "AnotherMenu.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    AnotherMenu window;

    window.resize(350, 250);
    window.setWindowTitle("Another menu");
    window.show();

    return QApplication::exec();
}
