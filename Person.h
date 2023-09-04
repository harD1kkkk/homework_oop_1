#pragma once
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;

public:
    Person();
    Person(string& n, int a);
    void setName(string& n);
    std::string getName();
    void setAge(int a);
    int getAge();
    void displayInfo();
};
