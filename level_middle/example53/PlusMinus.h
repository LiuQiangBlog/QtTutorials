//
// Created by qiang on 2021/11/15.
//

#ifndef EXAMPLE01_PLUSMINUS_H
#define EXAMPLE01_PLUSMINUS_H


#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>

class PlusMinus : public QWidget {

Q_OBJECT

public:
    PlusMinus(QWidget *parent = nullptr);

private slots:
    void OnPlus();
    void OnMinus();

private:
    QLabel *lbl;
};


#endif //EXAMPLE01_PLUSMINUS_H
