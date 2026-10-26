============================================================
EXPERIMENT 8 - PROGRAM 1: UNARY OPERATOR OVERLOADING
============================================================
#include <iostream>
using namespace std;

class Distance
{
public:
    int feet, inch;

    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }

    // Overload unary minus to decrement feet and inches.
    void operator-()
    {
        feet--;
        inch--;
        cout << "\nFeet & Inches (Decrement): " << feet << "'" << inch;
    }
};

int main()
{
    Distance d1(8, 9);
    -d1;
    return 0;
}

============================================================
EXPERIMENT 8 - PROGRAM 2: BINARY OPERATOR OVERLOADING
============================================================

#include <iostream>
using namespace std;

class Distance
{
public:
    int feet, inch;

    Distance()
    {
        feet = 0;
        inch = 0;
    }

    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }

    // Overload + to add two Distance objects.
    Distance operator+(Distance &d2)
    {
        Distance d3;
        d3.feet = feet + d2.feet;
        d3.inch = inch + d2.inch;
        return d3;
    }
};

int main()
{
    Distance d1(8, 9);
    Distance d2(10, 2);
    Distance d3;

    d3 = d1 + d2;

    cout << "\nTotal Feet & Inches: " << d3.feet << "'" << d3.inch;
    return 0;
}

============================================================
EXPERIMENT 8 - PROGRAM 3: RELATIONAL OPERATOR OVERLOADING
============================================================

#include <iostream>
using namespace std;

class MyClass
{
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    bool operator==(const MyClass &other) const
    {
        return value == other.value;
    }

    bool operator!=(const MyClass &other) const
    {
        return !(*this == other);
    }

    bool operator<(const MyClass &other) const
    {
        return value < other.value;
    }

    bool operator>(const MyClass &other) const
    {
        return value > other.value;
    }

    bool operator<=(const MyClass &other) const
    {
        return !(*this > other);
    }

    bool operator>=(const MyClass &other) const
    {
        return !(*this < other);
    }
};

int main()
{
    MyClass obj1(20);
    MyClass obj2(20);

    // Using overloaded == operator
    if (obj1 == obj2)
        cout << "obj1 is equal to obj2" << endl;
    else
        cout << "obj1 is not equal to obj2" << endl;

    // Using overloaded < operator
    if (obj1 < obj2)
        cout << "obj1 is less than obj2" << endl;
    else
        cout << "obj1 is not less than obj2" << endl;

    // Using overloaded != operator
    if (obj1 != obj2)
        cout << "obj1 is not equal to obj2" << endl;
    else
        cout << "obj1 is equal to obj2" << endl;

    // Using overloaded > operator
    if (obj1 > obj2)
        cout << "obj1 is greater than obj2" << endl;
    else
        cout << "obj1 is not greater than obj2" << endl;

    // Using overloaded <= operator
    if (obj1 <= obj2)
        cout << "obj1 is less than or equal to obj2" << endl;
    else
        cout << "obj1 is not less than or equal to obj2" << endl;

    // Using overloaded >= operator
    if (obj1 >= obj2)
        cout << "obj1 is greater than or equal to obj2" << endl;
    else
        cout << "obj1 is not greater than or equal to obj2" << endl;

    return 0;
}
