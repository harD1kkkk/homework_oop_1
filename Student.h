#pragma once
#include "Person.h"
using namespace std;
class Student : public Person {
private:
    int grades[10];
    int numGrades;

public:
    Student(string& n, int a);
    void addGrade(int grade);
    double calculateAverageGrade();
    void displayInfo();
    int getNumGrades();
};
