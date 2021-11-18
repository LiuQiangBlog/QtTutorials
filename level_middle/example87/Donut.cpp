//
// Created by qiang on 2021/11/18.
//

#include "Donut.h"
#include <QApplication>
#include <QPainter>

Donut::Donut(QWidget *parent) : QWidget(parent) {}

void Donut::paintEvent(QPaintEvent *e) {
    Q_UNUSED(e);
    doPainting();
}

void Donut::doPainting() {

    QPainter painter(this);

    painter.setPen(QPen(QBrush("#535353"), 0.5));
    painter.setRenderHint(QPainter::Antialiasing);

    int h = height();
    int w = width();

    painter.translate(QPoint(w / 2, h / 2));
    int cnt = static_cast<int>(360.0 / 5.0);
    for (int i = 0; i < cnt; ++i) {
        painter.drawEllipse(-125, -40, 250, 80);
        painter.rotate(5.0);
    }
}
