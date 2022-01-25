#include "Header.h"

void out(vector <int> a)
{
	int i = 0;
	cout << "===============================" << endl;
	while (i < a.size()) { cout << a[i] << endl; i++; }
	if (a.size() == 0) { cout << "NONE" << endl; }
	cout << "===============================" << endl;
}

int str_to_int(string a)
{
	int out = 0, i = 0;
	while (a[i] != '\0') { if (a[i] != '-') { out = out * 10 + a[i] - 48; } i++; }
	if (a[0] == '-') { out = 0 - out; }
	return out;
}
