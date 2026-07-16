#include <iostream>
#include "../include/Book.h"
#include "../include/Library.h"

using namespace std;

int main()
{
    Library library;

    Book b1(101, "Harry Potter", "J.K. Rowling");
    Book b2(102, "The Alchemist", "Paulo Coelho");
    Book b3(103, "Atomic Habits", "James Clear");

    library.addBook(b1);
    library.addBook(b2);
    library.addBook(b3);

    library.displayBooks();

    return 0;
}