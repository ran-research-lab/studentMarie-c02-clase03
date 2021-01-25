#include <iostream>
#include "Student.h"

using namespace std;

//Main

Student d("Debbie");

void foo() {
    Student c("Carlos");
}

int main() {
    //**************************************************************************************************
    //NOTA: Si va a crear memoria dinámica, DEBE  crearla con el constructor. Si quiere entender
    //      por qué, haga el ejercicio usando arreglos de objetos con la función setGrades creando
    //      la memoria como mostramos en el ejemplo. HINT: está destruyendo un objeto cuya memoria no se creó.
    //**************************************************************************************************


    Student a;
    Student b("Lola");


    int *pi = new int;
    *pi = 7;

    Student *ps = new Student("Pedro");

    ps->setName("Patricia");
    a.setName("Arturo");

    cout << "valor del puntero: " << pi << endl;
    cout << "valor del apuntado: " << *pi << endl;

    foo();

    cout << "nombre de a:  " << a.getName() << endl;
    cout << "nombre de b:  " << b.getName() << endl;
    cout << "nombre de objeto apuntado por ps: " << ps << endl;

    delete pi;
    delete ps;

    return 0;
}
