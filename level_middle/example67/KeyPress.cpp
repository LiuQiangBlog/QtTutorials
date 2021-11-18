//
// Created by qiang on 2021/11/18.
//

#include "KeyPress.h"
#include <QApplication>
#include <QKeyEvent>

KeyPress::KeyPress(QWidget *parent) : QWidget(parent) {}

void KeyPress::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Escape) {
        QApplication::quit();
    }
}