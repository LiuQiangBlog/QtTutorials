//
// Created by qiang on 2021/11/18.
//

#include "Absolute.h"

Absolute::Absolute(QWidget *parent) : QWidget(parent) {
    auto *edit = new QTextEdit(this);
    edit->setGeometry(5, 5, 200, 150);
}