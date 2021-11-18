//
// Created by qiang on 2021/11/15.
//

#include <QApplication>
#include <QWidget>
#include <QPushButton>

class MyButton : public QWidget {

public:
    explicit MyButton(QWidget *parent = nullptr);
};

MyButton::MyButton(QWidget *parent) : QWidget(parent) {
    auto *quitBtn = new QPushButton("Quit", this);
    quitBtn->setGeometry(50, 40, 75, 30);
    connect(quitBtn, &QPushButton::clicked, QApplication::instance(), &QApplication::quit);
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MyButton window;
    window.resize(250, 150);
    window.setWindowTitle("QPushButton");
    window.show();
    return QApplication::exec();
}