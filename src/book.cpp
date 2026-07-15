#include "../include/Book.h"

Book::Book(int id, string title, string author)
{
    this->id = id;
    this->title = title;
    this->author = author;
    this->issued = false;
}

int Book::getId()
{
    return id;
}

string Book::getTitle()
{
    return title;
}

string Book::getAuthor()
{
    return author;
}

bool Book::isIssued()
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