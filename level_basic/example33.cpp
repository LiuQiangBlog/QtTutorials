//
// Created by qiang on 2021/11/15.
//

#include <QVector>
#include <QTextStream>

int main() {
    QTextStream out(stdout);
    QVector<int> vec = {1, 2, 3, 4, 5};
    out << "The size of the vector is: " << vec.size() << endl;
    out << "The first item is: " << vec.first() << endl;
    out << "The last item is: " << vec.last() << endl;
    vec.append(6);
    vec.prepend(0);
    out << "Elements: ";
    for (int val : vec) {
        out << val << " ";
    }
    out << endl;
    return 0;
}