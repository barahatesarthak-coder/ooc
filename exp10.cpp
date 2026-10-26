============================================================
EXPERIMENT 10: FILE HANDLING - WRITE TO A FILE AND READ IT BACK
============================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout;
    string line;

    // Open the file for writing.
    fout.open("sample.txt");

    if (!fout)
    {
        cerr << "Unable to open sample.txt for writing." << endl;
        return 1;
    }

    cout << "Enter text line by line. Enter -1 to finish:\n";
    while (getline(cin, line))
    {
        if (line == "-1")
            break;

        fout << line << endl;
    }
    fout.close();

    // Open the file for reading and display its contents.
    ifstream fin;
    fin.open("sample.txt");

    if (!fin)
    {
        cerr << "Unable to open sample.txt for reading." << endl;
        return 1;
    }

    cout << "\nContents of the file:\n";
    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fin.close();
    return 0;
}

