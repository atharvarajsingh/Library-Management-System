#include "../include/Library.h"
#include <iostream>

void Library::addBook(const Book& book)
{
    books.push_back(book);
}

void Library::displayBooks() const
{
    for (const Book& book : books)
    {
        std::cout << "ID: " << book.getId() << std::endl;
        std::cout << "Title: " << book.getTitle() << std::endl;
        std::cout << "Author: " << book.getAuthor() << std::endl;
        std::cout << "Issued: " << book.isIssued() << std::endl;
        std::cout << std::endl;
    }
}