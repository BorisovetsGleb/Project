#include "Header.h"


void out(vector <int> a)
{
	int i = 0;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_RED | FOREGROUND_BLUE);
	cout << "===============================" << endl;
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	while (i < a.size()) { cout << a[i] << endl; i++; }
	if (a.size() == 0) { cout << "NONE" << endl; }
	SetConsoleTextAttribute(handle, FOREGROUND_RED | FOREGROUND_BLUE);
	cout << "===============================" << endl;
	SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

int str_to_int(string a)
{
	int out = 0, i = 0;
	while (a[i] != '\0') { if (a[i] != '-') { out = out * 10 + a[i] - 48; } i++; }
	if (a[0] == '-') { out = 0 - out; }
	return out;
}
