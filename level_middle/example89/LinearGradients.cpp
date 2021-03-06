//
// Created by qiang on 2021/11/18.
//

#include "LinearGradients.h"
#include <QApplication>
#include <QPainter>

LinearGradients::LinearGradients(QWidget *parent) : QWidget(parent) {}

void LinearGradients::paintEvent(QPaintEvent *e) {
    Q_UNUSED(e);
    doPainting();
}

void LinearGradients::doPainting() {

    QPainter painter(this);

    QLinearGradient grad1(0, 20, 0, 110);

    grad1.setColorAt(0.1, Qt::black);
    grad1.setColorAt(0.5, Qt::yellow);
    grad1.setColorAt(0.9, Qt::black);

    painter.fillRect(20, 20, 300, 90, grad1);

    QLinearGradient grad2(0, 55, 250, 0);

    grad2.setColorAt(0.2, Qt::black);
    grad2.setColorAt(0.5, Qt::red);
    grad2.setColorAt(0.8, Qt::black);

    painter.fillRect(20, 140, 300, 100, grad2);
}
