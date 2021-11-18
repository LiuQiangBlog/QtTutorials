//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_LINES_H
#define QTCODE_LINES_H


#include <QWidget>

class Lines : public QWidget {
public:
    Lines(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *event);
    void drawLines(QPainter *qp);
};



#endif //QTCODE_LINES_H
