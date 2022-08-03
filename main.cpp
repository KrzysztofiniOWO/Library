#include <iostream>
#include "Library_commands.h"
#include "Library_viewer.h"
#include "Library_control.h"
#include "Person.h"
#include "File_manager.h"

int main() {

    Library_commands library_commands;

    Person person(library_commands);

    File_manager file_manager(library_commands, person);

    Library_viewer library_viewer(library_commands, person);

    Library_control library_control(library_commands, library_viewer, person, file_manager);

    library_control.library_controller();





}
