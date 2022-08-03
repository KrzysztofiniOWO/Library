#include "Library_viewer.h"
#include <iostream>

Library_viewer::Library_viewer(Library_commands &library_commands, Person &person):
library_commands(library_commands),
person(person)
{}

void Library_viewer::show_collection()
{

    std::cout << "************************************************************" << std::endl;

    for(int it = 0; it < library_commands.return_size(); it++)
    {
        std::cout << library_commands.return_title(it);
        std::cout << "  -  number of this book is: ";
        std::cout << library_commands.return_book_number(it) << std::endl;
    }

    std::cout << "************************************************************";

    std::cout << std::endl << std::endl;
}

void Library_viewer::show_person_collection()
{
    std::cout << "************************************************************" << std::endl;

    for(int it = 0; it < person.return_size(); it++)
    {
        std::cout << person.return_title(it);
        std::cout << "  -  number of this book is: ";
        std::cout << person.return_book_number(it) << std::endl;
    }

    std::cout << "************************************************************";

    std::cout << std::endl << std::endl;
}

void Library_viewer::recommend_books()
{
    std::cout << "What is your favourite category of books?: " << std::endl;

    std::string category = library_commands.select_category();

    std::cout << std::endl;

    for(int it = 0; it < library_commands.return_size(); it++)
    {
        if (library_commands.return_category(it) == category)
        {
            std::cout << library_commands.return_title(it) << " it's number is "
            << library_commands.return_book_number(it) << std::endl;
        }
    }

    std::cout << std::endl;
}