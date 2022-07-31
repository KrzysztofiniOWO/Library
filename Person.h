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


};



