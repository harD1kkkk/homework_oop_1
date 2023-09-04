#include "Teacher.h"
#include <iostream>
using namespace std;

Teacher::Teacher(string& n, int a, string& subj) : Person(n, a), subject(subj) {}

void Teacher::displayInfo() {
    Person::displayInfo();
    cout << ", Subject: " << subject << endl;
}

string Teacher::getSubject() {
    return subject;
}

void Teacher::setSubject(string& subj) {
    subject = subj;
}
