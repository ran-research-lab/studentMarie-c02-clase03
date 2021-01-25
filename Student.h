//  main.cpp
//  clasesExp
//
//  Created by Marie Lluberes on 5/13/20.
//  Copyright © 2020 Marie Lluberes. All rights reserved.

#ifndef STUDENTMARIE_STUDENT_H
#define STUDENTMARIE_STUDENT_H

#include <iostream>
#include<string>

using namespace std;

class Student {
private:
    string name;
    int year;
    double notas[5];
    double *grades;
public:
//    Student();
    Student (const string &aName = "Juan del Pueblo");
    Student (int aYear);
    void setName(string);
    void setYear(int);
    void setNotas();
    void setGrades();
    string getName();
    int getYear();
    const double *getNotas();
    const double *getGrades();
    double getAve();
    ~Student(){
        cout << "Destruyo a: " << name << endl;
        delete [] grades;
    }

};



#endif //STUDENTMARIE_STUDENT_H
