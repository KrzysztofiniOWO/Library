#include "Library_viewer.h"
#include <iostream>

Library_viewer::Library_viewer(Library_commands &library_commands):
library_commands(library_commands)
{}

void Library_viewer::show_collection()
{
    for(int it = 0; it < library_commands.return_size(); it++)
    {
        library_commands.show_title(it);
        std::cout << "  -  number of this book is: ";
        library_commands.show_number(it);
    }

    std::cout << std::endl;
}