#include <iostream>
#include <vector>
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

    //pb(a, b);
    sortic(a, b);
    cout << endl << "a:" << endl;
    out(a);
    cout << endl << "b:" << endl;
    out(b);
}
