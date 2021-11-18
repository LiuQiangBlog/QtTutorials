//
// Created by qiang on 2021/11/18.
//

#include "Slider.h"
#include <QHBoxLayout>

Slider::Slider(QWidget *parent) : QWidget(parent) {

    auto *hbox = new QHBoxLayout(this);

    slider = new QSlider(Qt::Horizontal, this);
    hbox->addWidget(slider);

    label = new QLabel("0", this);
    hbox->addWidget(label);

//   connect(slider, &QSlider::valueChanged, label, static_cast<void(QLabel::*)(int)>(&QLabel::setNum));

    connect(slider, &QSlider::valueChanged, label, QOverload<int>::of(&QLabel::setNum));
}