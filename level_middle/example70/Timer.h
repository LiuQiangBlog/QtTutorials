//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_TIMER_H
#define QTCODE_TIMER_H

#include <QWidget>
#include <QLabel>

class Timer : public QWidget {
public:
    explicit Timer(QWidget *parent = nullptr);

protected:
    void timerEvent(QTimerEvent *e) override;

private:
    QLabel *label;
};



#endif //QTCODE_TIMER_H
