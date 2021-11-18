//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_KEYPRESS_H
#define QTCODE_KEYPRESS_H

#include <QWidget>

class KeyPress : public QWidget {
public:
    KeyPress(QWidget *parent = 0);

protected:
    void keyPressEvent(QKeyEvent * e);
};



#endif //QTCODE_KEYPRESS_H
