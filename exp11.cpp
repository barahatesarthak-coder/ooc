============================================================
EXPERIMENT 11 - PROGRAM 1: TRY, CATCH, THROW (DIVISION BY ZERO)
============================================================

#include <iostream>
using namespace std;

double division(int a, int b)
{
    if (b == 0)
    {
        throw "Division by zero condition!";
    }

    // Kept as in the scanned code: a and b are integers.
    return (a / b);
}

int main()
{
    int x = 50;
    int y = 0;
    double z = 0;

    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }

    return 0;
}

============================================================
EXPERIMENT 11 - PROGRAM 2: CUSTOM EXCEPTION CLASS
============================================================

#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Attempted to divide by zero!\n";
    }
};

int main()
{
    try
    {
        int x, y;
        cout << "Enter the two numbers: \n";
        cin >> x >> y;

        if (y == 0)
        {
            MyException z;
            throw z;
        }
        else
        {
            cout << "x / y = " << x / y << endl;
        }
    }
    catch (const exception &e)
    {
        cout << e.what();
    }

    return 0;
}

