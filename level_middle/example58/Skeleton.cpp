//
// Created by qiang on 2021/11/18.
//

#include "Skeleton.h"
#include <QToolBar>
#include <QIcon>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QTextEdit>

Skeleton::Skeleton(QWidget *parent) : QMainWindow(parent) {
    QPixmap newpix("../level_middle/resource/new.png");
    QPixmap openpix("../level_middle/resource/open.png");
    QPixmap quitpix("../level_middle/resource/quit.png");
    auto *quit = new QAction("&Quit", this);
    QMenu *file = menuBar()->addMenu("&File");
    file->addAction(quit);
    connect(quit, &QAction::triggered, QApplication::instance(), &QApplication::quit);
    QToolBar *toolbar = addToolBar("main toolbar");
    toolbar->addAction(QIcon(newpix), "New File");
    toolbar->addAction(QIcon(openpix), "Open File");
    toolbar->addSeparator();
    QAction *quit2 = toolbar->addAction(QIcon(quitpix),"Quit Application");
    connect(quit2, &QAction::triggered, QApplication::instance(), &QApplication::quit);
    auto *edit = new QTextEdit(this);
    setCentralWidget(edit);
    statusBar()->showMessage("Ready");
}