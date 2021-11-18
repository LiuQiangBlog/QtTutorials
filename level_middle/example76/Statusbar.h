//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_STATUSBAR_H
#define QTCODE_STATUSBAR_H


#include <QMainWindow>
#include <QPushButton>

class Statusbar : public QMainWindow {
Q_OBJECT

public:
    Statusbar(QWidget *parent = nullptr);

private slots:
    void OnOkPressed();
    void OnApplyPressed();

private:
    QPushButton *okBtn;
    QPushButton *aplBtn;
};



#endif //QTCODE_STATUSBAR_H
