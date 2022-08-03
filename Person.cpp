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

    for(int it = 0; it < return_size(); it++)
    {

        if (return_book_number(it) == number)
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

int Person::return_size()
{
    return static_cast<int>(backpack.size());
}

std::string Person::return_title(int idx)
{
    return backpack[idx].title;
}

int Person::return_book_number(int idx)
{
    return backpack[idx].book_number;
}

int Person::return_number_of_pages(int idx)
{
    return backpack[idx].number_of_pages;
}

std::string Person::return_category(int idx)
{
    return backpack[idx].category;
}