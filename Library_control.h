#pragma once
#include "Library_commands.h"
#include "Library_viewer.h"
#include "Person.h"
#include "File_manager.h"
#include <string>


class Library_control {

private:

    bool on = true;

protected:

    Library_commands& library_commands;
    Library_viewer& library_viewer;
    Person& person;
    File_manager& file_manager;

public:

    Library_control(Library_commands& library_commands, Library_viewer& library_viewer, Person& person, File_manager& file_manager);

    //Function responsible for behaviour of our library
    void library_controller();

};


