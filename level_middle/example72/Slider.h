//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_SLIDER_H
#define QTCODE_SLIDER_H

#include <QWidget>
#include <QSlider>
#include <QLabel>

class Slider : public QWidget {
Q_OBJECT

public:
    Slider(QWidget *parent = nullptr);

private:
    QSlider *slider;
    QLabel *label;
};



#endif //QTCODE_SLIDER_H
