#include "Library_commands.h"
#include <iostream>

void Library_commands::add_book()
{
    Book book;

    std::cout << "What is the title of book? (words divided by _) : " << std::endl;
    std::cin >> book.title;

    std::cout << "Assign an id number to our book: " << std::endl;
    std::cin >> book.book_number;

    std::cout << "How many pages does the book have?: " << std::endl;
    std::cin >> book.number_of_pages;

    std::cout << "What is the category of our book?: " << std::endl;
    book.category = select_category();

    list_of_books.push_back(book);
}

void Library_commands::remove_book(int number)
{
    for(int it = 0; it < return_size(); it++)
    {
        if (list_of_books[it].book_number == number)
        {
            list_of_books.erase(list_of_books.begin() + it);
        }
    }
}

void Library_commands::check_book(int number) const
{
    std::cout << list_of_books[number].title << std::endl;
    std::cout << list_of_books[number].book_number << std::endl;
    std::cout << list_of_books[number].number_of_pages << std::endl;
    std::cout << list_of_books[number].category << std::endl;

}

std::string Library_commands::select_category()
{
    int number;

    std::cout << "1 - Fiction" << std::endl;
    std::cout << "2 - Mystery" << std::endl;
    std::cout << "3 - Thriller" << std::endl;
    std::cout << "4 - Horror" << std::endl;
    std::cout << "5 - Historical" << std::endl;
    std::cout << "6 - Romance" << std::endl;
    std::cout << "7 - Western" << std::endl;
    std::cout << "8 - Science_fiction" << std::endl;
    std::cout << "9 - Realistic" << std::endl;
    std::cout << "10 - Biography" << std::endl;

    std::cin >> number;

    return categories[number-1];
}

int Library_commands::return_size()
{
    return static_cast<int>(list_of_books.size());
}

Book Library_commands::get_a_book(int number)
{
    Book book;

    for(int it = 0; it < return_size(); it++)
    {
        if (list_of_books[it].book_number == number)
        {
            book.title = list_of_books[it].title;
            book.book_number = list_of_books[it].book_number;
            book.number_of_pages = list_of_books[it].number_of_pages;
            book.category = list_of_books[it].category;
        }
    }

    return book;
}

int Library_commands::get_a_number()
{
    int number;

    std::cout << "What is the number of a book?: " << std::endl;

    std::cin >> number;

    return number;
}

void Library_commands::take_back_book(Book book)
{
    list_of_books.push_back(book);
}

std::string Library_commands::return_title(int idx)
{
    return list_of_books[idx].title;
}

int Library_commands::return_book_number(int idx)
{
    return list_of_books[idx].book_number;
}

int Library_commands::return_number_of_pages(int idx)
{
    return list_of_books[idx].number_of_pages;
}

std::string Library_commands::return_category(int idx)
{
    return list_of_books[idx].category;
}