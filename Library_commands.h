#pragma once
#include <string>
#include <vector>

struct Book
{
    std::string title;
    int book_number;
    int number_of_pages;
    std::string category;
};


class Library_commands {

private:

    std::string categories[10] = {"Fiction", "Mystery", "Thriller", "Horror", "Historical",
                                 "Romance", "Western", "Science_fiction", "Realistic", "Biography"};

protected:

    std::vector<Book> list_of_books;

public:

    //Add book to our library
    void add_book();

    //Remove book from our library
    void remove_book(int number);

    //Check informations about a certain book in our library
    void check_book(int number) const;

    //Select category for our book from a list
    std::string select_category();

    //Returns current amount of books in our library
    int return_size();



};

