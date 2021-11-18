//
// Created by qiang on 2021/11/16.
//

#include "AnotherMenu.h"
#include <QMenu>
#include <QMenuBar>

AnotherMenu::AnotherMenu(QWidget *parent) : QMainWindow(parent) {

    QPixmap newpix("../level_middle/resource/new.png");
    QPixmap openpix("../level_middle/resource/open.png");
    QPixmap quitpix("../level_middle/resource/quit.png");

    auto *newa = new QAction(newpix, "&New", this);
    auto *open = new QAction(openpix, "&Open", this);
    auto *quit = new QAction(quitpix, "&Quit", this);
    quit->setShortcut(tr("CTRL+Q"));

    QMenu *file = menuBar()->addMenu("&File");
    file->addAction(newa);
    file->addAction(open);
    file->addSeparator();
    file->addAction(quit);

    QApplication::setAttribute(Qt::AA_DontShowIconsInMenus, false);

    connect(quit, &QAction::triggered, QApplication::instance(), &QApplication::quit);
}