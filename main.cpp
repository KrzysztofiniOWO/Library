#include <iostream>
#include "Library_commands.h"
#include "Library_viewer.h"
#include "Library_control.h"
#include "Person.h"

int main() {

    Library_commands library_commands;

    Person person(library_commands);

    Library_viewer library_viewer(library_commands);

    Library_control library_control(library_commands, library_viewer, person);

    library_control.library_controller();





}
