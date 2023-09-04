#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main() {
    int numPeople;
    cout << "Enter the number of people: ";
    cin >> numPeople;

    if (numPeople <= 0) {
        cout << "Invalid input. Exiting..." << endl;
        return 1;
    }

    Person** people = new Person * [numPeople];

    for (int i = 0; i < numPeople; i++) {
        cout << "Enter person " << i + 1 << " name: ";
        string name;
        cin >> name;
        cout << "Enter person " << i + 1 << " age: ";
        int age;
        cin >> age;

        cout << "Is this person a student (1) or a teacher (2)? ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            people[i] = new Student(name, age);
        }
        else if (choice == 2) {
            cout << "Enter teacher " << i + 1 << " subject: ";
            string subject;
            cin >> subject;
            people[i] = new Teacher(name, age, subject);
        }
        else {
            cout << "Invalid choice. Exiting..." << endl;
            return 1;
        }
    }

    cout << "Class information:" << endl;

    for (int i = 0; i < numPeople; i++) {
        people[i]->displayInfo();
    }

    for (int i = 0; i < numPeople; i++) {
        delete people[i];
    }
    delete[] people;
}
