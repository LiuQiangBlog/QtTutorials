//
// Created by qiang on 2021/11/18.
//

#include "Statusbar.h"
#include <QLabel>
#include <QFrame>
#include <QStatusBar>
#include <QHBoxLayout>

Statusbar::Statusbar(QWidget *parent) : QMainWindow(parent) {

    auto *frame = new QFrame(this);
    setCentralWidget(frame);

    auto *hbox = new QHBoxLayout(frame);

    okBtn = new QPushButton("OK", frame);
    hbox->addWidget(okBtn, 0, Qt::AlignLeft | Qt::AlignTop);

    aplBtn = new QPushButton("Apply", frame);
    hbox->addWidget(aplBtn, 1, Qt::AlignLeft | Qt::AlignTop);

    statusBar();

    connect(okBtn, &QPushButton::clicked, this, &Statusbar::OnOkPressed);
    connect(aplBtn, &QPushButton::clicked, this, &Statusbar::OnApplyPressed);
}

void Statusbar::OnOkPressed() {

    statusBar()->showMessage("OK button pressed", 2000);
}

void Statusbar::OnApplyPressed() {

    statusBar()->showMessage("Apply button pressed", 2000);
}