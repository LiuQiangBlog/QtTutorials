//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>
#include <QList>
#include <algorithm>

int main() {
    QTextStream out(stdout);
    QList<QString> authors = {"Balzac", "Tolstoy", "Gulbranssen", "London"};
    for (int i = 0; i < authors.size(); ++i) {
        out << authors.at(i) << endl;
    }
    authors << "Galsworthy" << "Sienkiewicz";
    out << "***********************" << endl;
    std::sort(authors.begin(), authors.end());
    out << "Sorted:" << endl;
    for (const QString &author : authors) {
        out << author << endl;
    }
    return 0;
}