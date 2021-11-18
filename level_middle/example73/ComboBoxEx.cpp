//
// Created by qiang on 2021/11/18.
//

#include "ComboBoxEx.h"
#include <QHBoxLayout>

ComboBoxEx::ComboBoxEx(QWidget *parent) : QWidget(parent) {
    QStringList distros = {"Arch", "Xubuntu", "Redhat", "Debian", "Mandriva"};
    auto *hbox = new QHBoxLayout(this);
    combo = new QComboBox();
    combo->addItems(distros);
    hbox->addWidget(combo);
    hbox->addSpacing(15);
    label = new QLabel("Arch", this);
    hbox->addWidget(label);
    connect(combo, QOverload<const QString &>::of(&QComboBox::activated), label, &QLabel::setText);
}