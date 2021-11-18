//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_RADIALGRADIENT_H
#define QTCODE_RADIALGRADIENT_H


#include <QWidget>

class RadialGradient : public QWidget {

public:
    RadialGradient(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *e);

private:
    void doPainting();
};


#endif //QTCODE_RADIALGRADIENT_H
