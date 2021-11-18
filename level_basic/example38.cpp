//
// Created by qiang on 2021/11/15.
//

#include <QString>
#include <QTextStream>
#include <QList>
#include <algorithm>
#include <utility>

class Book {
public:
    Book(QString, QString);
    QString getAuthor() const;
    QString getTitle() const;

private:
    QString author;
    QString title;
};

Book::Book(QString auth, QString tit) {
    author = std::move(auth);
    title = std::move(tit);
}

QString Book::getAuthor() const {
    return author;
}

QString Book::getTitle() const {
    return title;
}

bool compareByTitle(const Book &b1, const Book &b2) {

    return b1.getTitle() < b2.getTitle();
}

int main() {
    QTextStream out(stdout);
    QList<Book> books = {
            Book("Jack London", "The Call of the Wild"),
            Book("Honoré de Balzac", "Father Goriot"),
            Book("Leo Tolstoy", "War and Peace"),
            Book("Gustave Flaubert", "Sentimental education"),
            Book("Guy de Maupassant", "Une vie"),
            Book("William Shakespeare", "Hamlet")
    };
    std::sort(books.begin(), books.end(), compareByTitle);
    for (const Book& book : books) {
        out << book.getAuthor() << ": " << book.getTitle() << endl;
    }
    return 0;
}