//
// Created by qiang on 2021/11/18.
//

#include "TransparentRectangles.h"
#include <QApplication>
#include <QPainter>
#include <QPainterPath>

TransparentRectangles::TransparentRectangles(QWidget *parent) : QWidget(parent) {}

void TransparentRectangles::paintEvent(QPaintEvent *e) {
    Q_UNUSED(e);
    doPainting();
}

void TransparentRectangles::doPainting() {

    QPainter painter(this);
    for (int i = 1; i <= 11; i++) {
        painter.setOpacity(i * 0.1); // set background opacity
        painter.fillRect(50 * i, 20, 40, 40, Qt::darkGray);
    }
}