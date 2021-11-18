//
// Created by qiang on 2021/11/18.
//

#ifndef QTCODE_LINEARGRADIENTS_H
#define QTCODE_LINEARGRADIENTS_H


#include <QWidget>

class LinearGradients : public QWidget {

public:
    explicit LinearGradients(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *e) override;

private:
    void doPainting();
};


#endif //QTCODE_LINEARGRADIENTS_H
