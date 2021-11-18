//
// Created by qiang on 2021/11/18.
//

#include "Checkable.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    Checkable window;

    window.resize(350, 250);
    window.setWindowTitle("Checkable menu");
    window.show();

    return app.exec();
}