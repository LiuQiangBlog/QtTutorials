//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_PATTERNS_H
#define QTCODE_PATTERNS_H

#include <QWidget>

class Patterns : public QWidget {
public:
    Patterns(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *e);

private:
    void doPainting();
};


#endif //QTCODE_PATTERNS_H
