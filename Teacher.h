#pragma once
#include "Person.h"
#include <string>
using namespace std;
class Teacher : public Person {
private:
    string subject;

public:
    Teacher(string& n, int a, string& subj);
    void displayInfo();
    string getSubject();
    void setSubject(string& subj);
};
