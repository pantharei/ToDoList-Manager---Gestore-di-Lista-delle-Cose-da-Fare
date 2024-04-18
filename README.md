ToDoList Manager
=================

## Introduzione
Questo progetto implementa un gestore di lista delle cose da fare (ToDoList) in C++ utilizzando una classe `ToDoList`. Il gestore consente di aggiungere, rimuovere e stampare le attività della lista, oltre a ordinare le attività in base alla priorità.

## Contenuto
- `ToDoList.h`: Questo file contiene la dichiarazione della classe `ToDoList`, che gestisce la lista delle attività da fare.
- `ToDoList.cpp`: Questo file contiene l'implementazione dei metodi della classe `ToDoList`.
- `main.cpp`: Questo file contiene la funzione `main` che mostra un esempio di utilizzo della classe `ToDoList`.

## Requisiti
Il codice è stato testato su un compilatore C++ compatibile con lo standard C++11 o superiore.

## Come usare il codice
1. Clonare il repository o scaricare i file `ToDoList.h`, `ToDoList.cpp` e `main.cpp`.
2. Compilare il codice sorgente utilizzando un compilatore C++ compatibile.
3. Eseguire l'eseguibile generato.

## Funzionalità
- `ToDoList.h`: Questo file contiene la dichiarazione della classe `ToDoList`, che gestisce la lista delle attività da fare. La classe ha metodi per aggiungere, rimuovere e stampare le attività, nonché per ordinare le attività in base alla priorità.
- `ToDoList.cpp`: Questo file contiene l'implementazione dei metodi della classe `ToDoList`, inclusi i metodi per aggiungere, rimuovere e stampare le attività, nonché il metodo per ordinare le attività in base alla priorità.
- `main.cpp`: Questo file contiene la funzione `main`, che mostra un esempio di utilizzo della classe `ToDoList`.

## Esempio di utilizzo
```cpp
#include "ToDoList.h"
#include <iostream>

int main() {
    ToDoList l;
    l.add("Fare la spesa", "red");
    l.add("meditare", "green");
    l.add("gym", "red");
    l.add("aiutare a pulire", "red");
    l.print_list();

    l.remove("gym");
    l.print_list();

    return 0;
}
```

ENGLISH :
ToDoList Manager
=================

## Introduction
This project implements a ToDoList manager in C++ using a `ToDoList` class. The manager allows adding, removing, and printing tasks in the list, as well as sorting tasks based on priority.

## Contents
- `ToDoList.h`: This file contains the declaration of the `ToDoList` class, which manages the list of tasks to do.
- `ToDoList.cpp`: This file contains the implementation of the methods of the `ToDoList` class.
- `main.cpp`: This file contains the `main` function showing an example usage of the `ToDoList` class.

## Requirements
The code has been tested on a C++ compiler compatible with C++11 standard or higher.

## How to Use the Code
1. Clone the repository or download the files `ToDoList.h`, `ToDoList.cpp`, and `main.cpp`.
2. Compile the source code using a compatible C++ compiler.
3. Run the generated executable.

## Features
- `ToDoList.h`: This file contains the declaration of the `ToDoList` class, which manages the list of tasks to do. The class has methods to add, remove, and print tasks, as well as to sort tasks based on priority.
- `ToDoList.cpp`: This file contains the implementation of the methods of the `ToDoList` class, including methods to add, remove, and print tasks, as well as the method to sort tasks based on priority.
- `main.cpp`: This file contains the `main` function showing an example usage of the `ToDoList` class.

## Example Usage
```cpp
#include "ToDoList.h"
#include <iostream>

int main() {
    ToDoList l;
    l.add("Go grocery shopping", "red");
    l.add("Meditate", "green");
    l.add("Go to the gym", "red");
    l.add("Help with cleaning", "red");
    l.print_list();

    l.remove("Go to the gym");
    l.print_list();

    return 0;
}
```
## License
This project is released under the 'MIT' License.
