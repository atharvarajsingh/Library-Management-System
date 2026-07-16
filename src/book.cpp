#include "../include/Book.h"

Book::Book(int id, string title, string author)
{
    this->id = id;
    this->title = title;
    this->author = author;
    this->issued = false;
}

int Book::getId() const
{
    return id;
}

string Book::getTitle() const
{
    return title;
}

string Book::getAuthor() const
{
    return author;
}

bool Book::isIssued() const
{
    return issued;
}

void Book::issueBook()
{
    issued = true;
}

void Book::returnBook()
{
    issued = false;
}