//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_PROGRESSBAR_H
#define QTCODE_PROGRESSBAR_H

#include <QWidget>
#include <QProgressBar>
#include <QPushButton>

class ProgressBar : public QWidget {

Q_OBJECT

public:
    ProgressBar(QWidget *parent = nullptr);

private:
    int progress;
    QTimer *timer;
    QProgressBar *pbar;
    QPushButton *startBtn;
    QPushButton *stopBtn;
    static const int DELAY = 200;
    static const int MAX_VALUE = 100;

    void updateBar();
    void startMyTimer();
    void stopMyTimer();
};

#endif //QTCODE_PROGRESSBAR_H
