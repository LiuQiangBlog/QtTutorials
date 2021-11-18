//
// Created by qiang on 2021/11/18.
//

#include "Checkable.h"
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>

Checkable::Checkable(QWidget *parent) : QMainWindow(parent) {
    actViewStatusBar = new QAction("&View statusbar", this);
    actViewStatusBar->setCheckable(true);
    actViewStatusBar->setChecked(true);
    QMenu *fileMenu = menuBar()->addMenu("&File");
    fileMenu->addAction(actViewStatusBar);
    statusBar();
    connect(actViewStatusBar, &QAction::triggered, this, &Checkable::toggleStatusbar);
}

void Checkable::toggleStatusbar() {
    if (actViewStatusBar->isChecked()) {
        statusBar()->show();
    } else {
        statusBar()->hide();
    }
}
