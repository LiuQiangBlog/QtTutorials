//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_TRANSPARENTRECTANGLES_H
#define QTCODE_TRANSPARENTRECTANGLES_H


#include <QWidget>

class TransparentRectangles : public QWidget {

public:
    explicit TransparentRectangles(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *event) override;
    void doPainting();
};


#endif //QTCODE_TRANSPARENTRECTANGLES_H
