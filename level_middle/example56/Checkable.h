//
// Created by qiang on 2021/11/18.
//

#ifndef SVD_PINV_CPP_VERSION_CHECKABLE_H
#define SVD_PINV_CPP_VERSION_CHECKABLE_H


#include <QMainWindow>
#include <QApplication>

class Checkable : public QMainWindow {
    Q_OBJECT
public:
    explicit Checkable(QWidget *parent = nullptr);

private Q_SLOTS:
    void toggleStatusbar();

private:
    QAction *actViewStatusBar;
};


#endif //SVD_PINV_CPP_VERSION_CHECKABLE_H
