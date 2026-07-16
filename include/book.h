#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book
{
private:
    int id;
    string title;
    string author;
    bool issued;

public:
    Book(int id,
         string title,
         string author);

    int getId() const;
    string getTitle() const;
    string getAuthor() const;
    bool isIssued() const;

    void issueBook();
    void returnBook();
};

#endif