#include "Library_control.h"
#include <iostream>

Library_control::Library_control(Library_commands &library_commands, Library_viewer &library_viewer, Person &person):
library_commands(library_commands),
library_viewer(library_viewer),
person(person)
{}

void Library_control::library_controller()
{
    std::cout << "****************************************" << std::endl;
    std::cout << "*        Welcome in our library        *" << std::endl;
    std::cout << "****************************************" << std::endl << std::endl;

    while(on)
    {
        int option, number;

        std::cout << "****************************************" << std::endl;
        std::cout << "*       What are you going to do?      *" << std::endl;
        std::cout << "*       1. Check  what books we have   *" << std::endl;
        std::cout << "*       2. Borrow a book               *" << std::endl;
        std::cout << "*       3. Return a book               *" << std::endl;
        std::cout << "*       4. Want a recommendation?      *" << std::endl;
        std::cout << "*       5. Gift a book to library      *" << std::endl;
        std::cout << "*       6. Exit the library            *" << std::endl;
        std::cout << "****************************************" << std::endl << std::endl;

        std::cin >> option;

        switch (option)
        {
            case 1:
                library_viewer.show_collection();
                break;

            case 2:
                number = library_commands.get_a_number();
                person.borrow_book(library_commands.get_a_book(number));
                library_commands.remove_book(number);
                break;

            case 3:
                number = library_commands.get_a_number();
                library_commands.take_back_book(person.return_book(number));
                person.remove_book(number);
                break;

            case 4:
                library_commands.recommend_books();
                break;

            case 5:
                library_commands.add_book();
                break;

            case 6:
                on = false;
                break;

            default:
                std::cout << "There is no such option. Press teh correct number." << std::endl;
                break;
            
        }
    }
}