//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_LABEL_H
#define QTCODE_LABEL_H

#include <QWidget>
#include <QLabel>

class Label : public QWidget {
public:
    Label(QWidget *parent = nullptr);

private:
    QLabel *label;
};

#endif //QTCODE_LABEL_H
