#pragma once
#include "Library_commands.h"
#include "Person.h"
#include <string>

class Library_viewer {

private:

    Library_commands& library_commands;
    Person& person;

protected:

public:

    Library_viewer(Library_commands& library_commands, Person& person);

    //Shows titles and numbers of books stored in a library
    void show_collection();

    //Shows titles and numbers of book in persons backpack
    void show_person_collection();

    //Recommend a book to person based on his favourite category
    void recommend_books();



};



