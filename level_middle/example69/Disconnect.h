//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_DISCONNECT_H
#define QTCODE_DISCONNECT_H

#include <QWidget>
#include <QPushButton>

class Disconnect : public QWidget {
Q_OBJECT
public:
    explicit Disconnect(QWidget *parent = 0);

private Q_SLOTS:
    void onClick();
    void onCheck(int);

private:
    QPushButton *clickBtn;
};


#endif //QTCODE_DISCONNECT_H
