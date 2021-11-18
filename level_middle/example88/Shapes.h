//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_SHAPES_H
#define QTCODE_SHAPES_H


#include <QWidget>

class Shapes : public QWidget {

public:
    Shapes(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *e);

private:
    void doPainting();
};



#endif //QTCODE_SHAPES_H
