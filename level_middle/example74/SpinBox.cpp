//
// Created by qiang on 2021/11/18.
//

#include "SpinBox.h"
#include <QHBoxLayout>
#include <QLabel>

SpinBox::SpinBox(QWidget *parent) : QWidget(parent) {
    auto *hbox = new QHBoxLayout(this);
    hbox->setSpacing(15);

    spinbox = new QSpinBox(this);
    auto *lbl = new QLabel("0", this);

    hbox->addWidget(spinbox);
    hbox->addWidget(lbl);
    connect(spinbox, QOverload<int>::of(&QSpinBox::valueChanged), lbl, QOverload<int>::of(&QLabel::setNum));
}