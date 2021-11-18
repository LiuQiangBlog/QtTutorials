//
// Created by qiang on 2021/11/16.
//

#ifndef EXAMPLE01_SIMPLEMENU_H
#define EXAMPLE01_SIMPLEMENU_H


#include <QMainWindow>
#include <QApplication>

class SimpleMenu : public QMainWindow { // if you want to define custom signals and slots, include Q_OBJECT
public:
    explicit SimpleMenu(QWidget *parent = nullptr);
};


#endif //EXAMPLE01_SIMPLEMENU_H
