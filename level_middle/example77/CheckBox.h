//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_CHECKBOX_H
#define QTCODE_CHECKBOX_H

#include <QWidget>

class CheckBox : public QWidget {
Q_OBJECT

public:
    CheckBox(QWidget *parent = 0);

private slots:
    void showTitle(int);
};



#endif //QTCODE_CHECKBOX_H
