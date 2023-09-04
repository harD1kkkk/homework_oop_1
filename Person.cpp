#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() : name(""), age(0) {}

Person::Person(string& n, int a) {
    name = n;
    age = a;
}

void Person::setName(string& n) {
    name = n;
}

string Person::getName() {
    return name;
}

void Person::setAge(int a) {
    age = a;
}

int Person::getAge() {
    return age;
}

void Person::displayInfo() {
    cout << "Name: " << name << ", Age: " << age;
}
