//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_LISTWIDGET_H
#define QTCODE_LISTWIDGET_H


#include <QWidget>
#include <QPushButton>
#include <QListWidget>

class ListWidget : public QWidget {
Q_OBJECT

public:
    ListWidget(QWidget *parent = 0);

private slots:
    void addItem();
    void renameItem();
    void removeItem();
    void clearItems();

private:
    QListWidget *lw;
    QPushButton *add;
    QPushButton *rename;
    QPushButton *remove;
    QPushButton *removeAll;
};


#endif //QTCODE_LISTWIDGET_H
