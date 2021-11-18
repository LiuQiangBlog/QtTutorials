//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_MOVE_H
#define QTCODE_MOVE_H

#include <QMainWindow>

class Move : public QWidget {
Q_OBJECT
public:
    Move(QWidget *parent = 0);

protected:
    void moveEvent(QMoveEvent *e);
};



#endif //QTCODE_MOVE_H
