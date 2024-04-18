#include "ToDoList.h"
#include <iostream>

int main(){

    ToDoList l;
    l.add("Fare la spesa","red");
    l.add("meditare","green");
    l.add("gym","red");
    l.add("aiutare a pulire","red");
    l.print_list();

    l.remove("gym");
    l.print_list();

    return 0;
}