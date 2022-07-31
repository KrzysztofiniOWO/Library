#pragma once
#include "Library_commands.h"
#include <string>

class Library_viewer {

private:

    Library_commands& library_commands;

protected:

public:

    Library_viewer(Library_commands& library_commands);

    //Shows titles of books stored in a library
    void show_collection();



};



