#include <iostream>
#include <vector>
#include <fstream>
#include <windows.h>
#include "Header.h"

using namespace std;

int main()
{
    vector <int> a, b;
    string s;
    cin >> s;
    while (s != "!")
    {
        a.push_back(str_to_int(s));
        cin >> s;
    }
    cout << endl;
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_BLUE);
    cout << "Programm started:";
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    cout << endl << "A:" << endl;
    out(a);
    cout << endl << "B:" << endl;
    out(b);
    cout << endl << endl;

    sortic(a, b);

    SetConsoleTextAttribute(handle, FOREGROUND_GREEN);
    cout << "Programm finished:";
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    cout << endl << "A:" << endl;
    out(a);
    cout << endl << "B:" << endl;
    out(b);
}
