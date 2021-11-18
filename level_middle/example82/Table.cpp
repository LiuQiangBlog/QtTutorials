//
// Created by qiang on 2021/11/18.
//

#include "Table.h"
#include <QHBoxLayout>
#include <QTableWidget>

Table::Table(QWidget *parent) : QWidget(parent) {
    QHBoxLayout *hbox = new QHBoxLayout(this);
    QTableWidget *table = new QTableWidget(25, 25, this);
    hbox->addWidget(table);
}