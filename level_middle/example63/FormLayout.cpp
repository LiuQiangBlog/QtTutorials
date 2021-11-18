//
// Created by qiang on 2021/11/18.
//

#include "FormLayout.h"
#include <QFormLayout>
#include <QLabel>
#include <QLineEdit>

FormLayout::FormLayout(QWidget *parent) : QWidget(parent) {

    auto *nameEdit = new QLineEdit(this);
    auto *addrEdit = new QLineEdit(this);
    auto *occpEdit = new QLineEdit(this);

    auto *formLayout = new QFormLayout;
    formLayout->setLabelAlignment(Qt::AlignRight | Qt::AlignVCenter);
    formLayout->addRow("Name:", nameEdit);
    formLayout->addRow("Email:", addrEdit);
    formLayout->addRow("Age:", occpEdit);

    setLayout(formLayout);
}