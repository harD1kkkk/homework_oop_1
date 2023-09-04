#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string& n, int a) : Person(n, a), numGrades(0) {}

void Student::addGrade(int grade) {
    if (numGrades < 10) {
        grades[numGrades++] = grade;
    }
}

double Student::calculateAverageGrade() {
    if (numGrades == 0) {
        return 0.0;
    }

    double sum = 0;
    for (int i = 0; i < numGrades; i++) {
        sum += grades[i];
    }
    return sum / numGrades;
}

void Student::displayInfo() {
    Person::displayInfo();
    cout << ", Average Grade: " << calculateAverageGrade() << endl;
}

int Student::getNumGrades() {
    return numGrades;
}
