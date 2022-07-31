#include "Person.h"

Person::Person(Library_commands &library_commands):
library_commands(library_commands)
{}

void Person::borrow_book(Book book)
{
    backpack.push_back(book);
}

Book Person::return_book(int number)
{
    Book book;

    for(int it = 0; it < library_commands.return_size(); it++)
    {

        if (library_commands.get_a_number() == number)
        {
            book.title = backpack[it].title;
            book.book_number = backpack[it].book_number;
            book.number_of_pages = backpack[it].number_of_pages;
            book.category = backpack[it].category;
        }
    }

    return book;
}

void Person::remove_book(int idx)
{
    backpack.erase(backpack.begin()+idx);
}