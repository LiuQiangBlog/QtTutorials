//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_SPINBOX_H
#define QTCODE_SPINBOX_H


#include <QWidget>
#include <QSpinBox>

class SpinBox : public QWidget {
Q_OBJECT
public:
    SpinBox(QWidget *parent = nullptr);

private:
    QSpinBox *spinbox;
};


#endif //QTCODE_SPINBOX_H
