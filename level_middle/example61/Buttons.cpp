//
// Created by qiang on 2021/11/18.
//

#include "Buttons.h"
#include <QVBoxLayout>
#include <QHBoxLayout>

Buttons::Buttons(QWidget *parent) : QWidget(parent) {
    auto *vbox = new QVBoxLayout(this);
    auto *hbox = new QHBoxLayout();

    okBtn = new QPushButton("OK", this);
    applyBtn = new QPushButton("Apply", this);

    hbox->addWidget(okBtn, 1, Qt::AlignRight);
    hbox->addWidget(applyBtn, 0);

    vbox->addStretch(1);
    vbox->addLayout(hbox);
}