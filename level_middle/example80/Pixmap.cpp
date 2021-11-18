//
// Created by qiang on 2021/11/18.
//

#include "Pixmap.h"
#include <QPixmap>
#include <QLabel>
#include <QHBoxLayout>

Pixmap::Pixmap(QWidget *parent) : QWidget(parent) {
    QHBoxLayout *hbox = new QHBoxLayout(this);
    QPixmap pixmap("../level_middle/resource/image.jpeg");
    QLabel *label = new QLabel(this);
    label->setPixmap(pixmap);
    hbox->addWidget(label, 0, Qt::AlignTop);
}