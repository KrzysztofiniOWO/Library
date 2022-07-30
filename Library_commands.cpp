#include "Library_commands.h"
#include <iostream>

void Library_commands::add_book()
{
    Book book;

    std::cout << "What is the title of book? (words divided by _) : " << std::endl;
    std::cin >> book.title;

    std::cout << "Assign an id number to our book [8 digits]: " << std::endl;
    std::cin >> book.book_number;

    std::cout << "How many pages does the book have?: " << std::endl;
    std::cin >> book.number_of_pages;

    std::cout << "What is the category of our book?: " << std::endl;
    book.category = select_category();

    list_of_books.push_back(book);
}

void Library_commands::remove_book(int number)
{
    list_of_books.erase(list_of_books.begin() + number);
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
