//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_DONUT_H
#define QTCODE_DONUT_H

#include <QWidget>

class Donut : public QWidget {
public:
    explicit Donut(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *e) override;

private:
    void doPainting();
};



#endif //QTCODE_DONUT_H
