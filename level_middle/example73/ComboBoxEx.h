//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_COMBOBOXEX_H
#define QTCODE_COMBOBOXEX_H

#include <QWidget>
#include <QComboBox>
#include <QLabel>

class ComboBoxEx : public QWidget {
Q_OBJECT
public:
    ComboBoxEx(QWidget *parent = nullptr);

private:
    QComboBox *combo;
    QLabel *label;
};


#endif //QTCODE_COMBOBOXEX_H
