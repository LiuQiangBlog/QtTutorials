//
// Created by qiang on 2021/11/18.
//

#include "VerticalBox.h"
#include <QVBoxLayout>
#include <QPushButton>

VerticalBox::VerticalBox(QWidget *parent) : QWidget(parent) {
    auto *vbox = new QVBoxLayout(this);
    vbox->setSpacing(1);

    auto *btn1 = new QPushButton("btn1", this);
    btn1->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    auto *btn2 = new QPushButton("btn2", this);
    btn2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    auto *btn3 = new QPushButton("btn3", this);
    btn3->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    auto *btn4 = new QPushButton("btn4", this);
    btn4->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    auto *btn5 = new QPushButton("btn5", this);
    btn5->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    vbox->addWidget(btn1);
    vbox->addWidget(btn2);
    vbox->addWidget(btn3);
    vbox->addWidget(btn4);
    vbox->addWidget(btn5);

    setLayout(vbox); // this->setLayout(vbox)
}