#include "File_manager.h"
#include <iostream>
#include <fstream>

File_manager::File_manager(Library_commands &library_commands, Person &person):
library_commands(library_commands),
person(person)
{}

void File_manager::load_library()
{
    int number_of_books = library_commands.return_size();

    std::fstream file;
    file.open("library.txt", std::ios::in);

    file >> number_of_books;

    for (int it = 0; it < number_of_books; it++)
    {
        Book book;

        std::string title;
        file >> title;
        book.title = title;

        int book_number;
        file >> book_number;
        book.book_number = book_number;

        int number_of_pages;
        file >> number_of_pages;
        book.number_of_pages = number_of_pages;

        std::string category;
        file >> category;
        book.category = category;

        library_commands.take_back_book(book);
    }

    file.close();

}

void File_manager::load_backpack()
{
    int number_of_books = person.return_size();

    std::fstream file;
    file.open("backpack.txt", std::ios::in);

    file >> number_of_books;

    for (int it = 0; it < number_of_books; it++)
    {
        Book book;

        std::string title;
        file >> title;
        book.title = title;

        int book_number;
        file >> book_number;
        book.book_number = book_number;

        int number_of_pages;
        file >> number_of_pages;
        book.number_of_pages = number_of_pages;

        std::string category;
        file >> category;
        book.category = category;

        person.borrow_book(book);
    }

    file.close();

}

void File_manager::save_library()
{
    std::fstream file;
    file.open("library.txt", std::ios::out);

    file << library_commands.return_size() << std::endl;

    for(int i = 0; i < library_commands.return_size(); i++)
    {
        file << library_commands.return_title(i) << std::endl;
        file << library_commands.return_book_number(i) << std::endl;
        file << library_commands.return_number_of_pages(i) << std::endl;
        file << library_commands.return_category(i) << std::endl;
    }

    file.close();

}

void File_manager::save_backpack()
{
    std::fstream file;
    file.open("backpack.txt", std::ios::out);

    file << person.return_size() << std::endl;

    for(int i = 0; i < person.return_size(); i++)
    {
        file << person.return_title(i) << std::endl;
        file << person.return_book_number(i) << std::endl;
        file << person.return_number_of_pages(i) << std::endl;
        file << person.return_category(i) << std::endl;
    }

    file.close();

}