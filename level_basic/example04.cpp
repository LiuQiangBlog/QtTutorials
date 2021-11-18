//
// Created by qiang on 2021/11/15.
//

#include <QTextStream>

int main() {
    QTextStream out(stdout);
    QString str1 = "The night train";
    out << str1 << endl;
    QString str2("A yellow rose");
    out << str2 << endl;
    QString str3{"An old falcon"};
    out << str3 << endl;
    std::string s1 = "A blue sky\n 123";
    QString str4 = s1.c_str();
    out << str4 << endl;
    std::string s2 = "A thick fog";
    QString str5 = QString::fromLatin1(s2.data(), s2.size());
    out << str5 << endl;
    char s3[] = "A deep forest";
    QString str6(s3);
    out << str6 << endl;
    return 0;
}