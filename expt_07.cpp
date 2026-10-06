#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "This is a person\n";
    }
};

// Student is inheriting Person() through single inheritance
class Student : public Person {
public:
    Student() {
        cout << "This is a student\n";
    }
};

class Vehicle {
public:
    Vehicle() {
        cout << "This is a vehicle\n";
    }
};

// Fourwheeler is inheriting Vehicle() through single inheritance
class Fourwheeler : public Vehicle {
public:
    Fourwheeler() {
        cout << "This 4 wheeler is a vehicle\n";
    }
};

// Car is inheriting Fourwheeler() and Vehicle() through multilevel inheritance
class Car : public Fourwheeler {
public:
    Car() {
        cout << "This 4 wheeler vehicle is a car\n";
    }
};

// When Student() is called, Person() is also directly called
// When Car() is called, Vehicle() and Fourwheeler() are also directly called

int main() {
    Student obj;
    Car obj1;

    return 0;
}