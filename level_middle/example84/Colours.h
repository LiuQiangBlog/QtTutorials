//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_COLOURS_H
#define QTCODE_COLOURS_H

#include <QWidget>

class Colours : public QWidget {
public:
    Colours(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *e);

private:
    void doPainting();
};


#endif //QTCODE_COLOURS_H
