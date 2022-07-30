#include <iostream>
#include "Library_commands.h"

int main() {

    Library_commands library;

    library.add_book();
    std::cout << library.return_size() << std::endl;
    library.check_book(0);
    library.remove_book(0);
    std::cout << library.return_size() << std::endl;



}
