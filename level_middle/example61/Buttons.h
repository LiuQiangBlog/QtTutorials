//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_BUTTONS_H
#define QTCODE_BUTTONS_H

#include <QWidget>
#include <QPushButton>

class Buttons : public QWidget {

public:
    explicit Buttons(QWidget *parent = nullptr);

private:
    QPushButton *okBtn;
    QPushButton *applyBtn;
};


#endif //QTCODE_BUTTONS_H
