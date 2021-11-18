//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_PUFF_H
#define QTCODE_PUFF_H

#include <QWidget>

class Puff : public QWidget {

public:
    Puff(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);

private:
    int x;
    qreal opacity;
    int timerId;

    void doPainting();
};



#endif //QTCODE_PUFF_H
