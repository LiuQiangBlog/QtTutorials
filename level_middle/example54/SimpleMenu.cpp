//
// Created by qiang on 2021/11/16.
//

#include "SimpleMenu.h"
#include <QMenu>
#include <QMenuBar>

SimpleMenu::SimpleMenu(QWidget *parent) : QMainWindow(parent) {
    auto *quit = new QAction("&Quit", this);
    QMenu *file = menuBar()->addMenu("&File");
    file->addAction(quit);
    connect(quit, &QAction::triggered, QApplication::instance(), QApplication::quit);
}