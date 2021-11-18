//
// Created by qiang on 2021/11/18.
//

#include "Toolbar.h"
#include <QToolBar>
#include <QIcon>
#include <QAction>

Toolbar::Toolbar(QWidget *parent) : QMainWindow(parent) {
    QPixmap newpix("../level_middle/resource/new.png");
    QPixmap openpix("../level_middle/resource/open.png");
    QPixmap quitpix("../level_middle/resource/quit.png");
    QToolBar *toolbar = addToolBar("main toolbar");
    toolbar->addAction(QIcon(newpix), "New File");
    toolbar->addAction(QIcon(openpix), "Open File");
    toolbar->addSeparator();
    QAction *quit = toolbar->addAction(QIcon(quitpix),"Quit Application");
    connect(quit, &QAction::triggered, QApplication::instance(), &QApplication::quit);
}