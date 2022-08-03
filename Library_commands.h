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

    //Get a book number from person to borrow it or return it
    int get_a_number();

    //Get a selected book to borrow it to user
    Book get_a_book(int number);

    //Returns a book from person to our library
    void take_back_book(Book book);

    //Return out book title
    std::string return_title(int idx);

    //Return our book number
    int return_book_number(int idx);

    //Return number of pages of our book
    int return_number_of_pages(int idx);

    //Return category of our book
    std::string return_category(int idx);

};

