OBJECT ORIENTED CONCEPTS — EXPERIMENT 7 CODE

============================================================
PROGRAM 1: multiple INHERITANCE 
============================================================

#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle\n";
    }
};

class FourWheeler
{
public:
    FourWheeler()
    {
        cout << "This is a 4 Wheeler\n";
    }
};

class Car : public Vehicle, public FourWheeler
{
public:
    Car()
    {
        cout << "This 4 Wheeler Vehicle is a Car\n";
    }
};

int main()
{
    Car obj;
    return 0;
}

============================================================
PROGRAM 2: multilevel INHERITANCE 
============================================================


#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person's constructor called" << endl;
    }
};

class Faculty : public Person
{
public:
    Faculty()
    {
        cout << "Faculty's constructor called" << endl;
    }
};

class Student : public Person
{
public:
    Student()
    {
        cout << "Student's constructor called" << endl;
    }
};

class TA : public Faculty, public Student
{
public:
    TA()
    {
        cout << "TA constructor called" << endl;
    }
};

int main()
{
    TA ta;
    return 0;
}

============================================================
PROGRAM 3: hybride INHERITANCE 
============================================================

#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle\n";
    }
};

class Fare
{
public:
    Fare()
    {
        cout << "Fare of Vehicle\n";
    }
};

class Car : public Vehicle, public Fare
{
public:
    Car()
    {
        cout << "This Vehicle is a Car\n";
    }
};

class Bus : public Vehicle, public Fare
{
public:
    Bus()
    {
        cout << "This Vehicle is a Bus with Fare\n";
    }
};

int main()
{
    Bus obj;
    return 0;
}
