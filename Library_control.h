#pragma once
#include "Library_commands.h"
#include "Library_viewer.h"
#include "Person.h"
#include <string>


class Library_control {

private:

    bool on = true;

protected:

    Library_commands& library_commands;
    Library_viewer& library_viewer;
    Person& person;

public:

    Library_control(Library_commands& library_commands, Library_viewer& library_viewer, Person& person);

    //Function responsible for behaviour of our library
    void library_controller();

};


