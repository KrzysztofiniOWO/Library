#pragma once
#include "Library_commands.h"
#include "Person.h"

class File_manager {

private:

    Library_commands& library_commands;
    Person& person;

protected:

public:

    File_manager(Library_commands& library_commands, Person& person);

    //Load books from file to our library
    void load_library();

    //Load books from file to person's backpack
    void load_backpack();

    //Save state of library after finishing
    void save_library();

    //Save state of backpack after finishing
    void save_backpack();

};
