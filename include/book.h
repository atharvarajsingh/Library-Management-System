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

    int getId();
    string getTitle();
    string getAuthor();
    bool isIssued();

    void issueBook();
    void returnBook();
};

#endif