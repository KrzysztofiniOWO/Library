#pragma once
#include "Library_commands.h"
#include <vector>
#include <string>


class Person {

private:

    Library_commands& library_commands;
    std::vector<Book> backpack;

protected:

public:

    Person(Library_commands& library_commands);

    //Borrow a book from library
    void borrow_book(Book book);

    //Return a book to library
    Book return_book(int number);

    //Removes book from our backpack
    void remove_book(int idx);

    //Return size of our backpack
    int return_size();

    //Return out book title
    std::string return_title(int idx);

    //Return our book number
    int return_book_number(int idx);

    //Return number of pages of our book
    int return_number_of_pages(int idx);

    //Return category of our book
    std::string return_category(int idx);



};



