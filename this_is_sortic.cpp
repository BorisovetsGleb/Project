#include "Header.h"

void sortic(vector <int>& a, vector <int>& b)
{
	int i = 0, id_min = -1;
	if (is_sorted(a) == false, a.size() == 2)
	{
		sa(a);
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout << "sa" << endl;
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

		cout << "A:" << endl;
		out(a);
		cout << "B:" << endl;
		out(b);
		cout << endl << endl;

	}
	if (is_sorted(a) == false)
	{
		while (a.size() != 0)
		{
			id_min = find_min(a);
			if (id_min <= a.size() / 2)
			{
				while (i < id_min)
				{
					ra(a);
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
					cout << "ra" << endl;

					ofstream outt("D:\\LOG.txt", ios::app | ios::binary);
					if (outt.is_open())
					{
						outt << "ra" << endl;
					}
					outt.close();

					i++;
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

					cout << "A:" << endl;
					out(a);
					cout << "B:" << endl;
					out(b);
					cout << endl << endl;
				}
			}
			else {
				while (i < a.size() - id_min)
				{
					rra(a);
					HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
					cout << "rra" << endl;
					SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

					ofstream outt("D:\\LOG.txt", ios::app | ios::binary);
					if (outt.is_open())
					{
						outt << "rra" << endl;
					}
					outt.close();

					i++;

					cout << "A:" << endl;
					out(a);
					cout << "B:" << endl;
					out(b);
					cout << endl << endl;
				}
			}
			i = 0;
			pb(a, b);
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
			cout << "pb" << endl;
			SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

			ofstream outt("D:\\LOG.txt", ios::app | ios::binary);
			if (outt.is_open())
			{
				outt << "rb" << endl;
			}
			outt.close();

			cout << "A:" << endl;
			out(a);
			cout << "B:" << endl;
			out(b);
			cout << endl << endl;
		}
		if (b.size() != 0)
		{
			while (b.size() != 0)
			{
				pa(a, b);
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
				cout << "rb" << endl;
				SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

				cout << "A:" << endl;
				out(a);
				cout << "B:" << endl;
				out(b);
				cout << endl << endl;
			}
		}
	}
}

bool is_sorted(vector <int>& a)
{
	bool ok = true;
	int i = 1;
	while (i < a.size()) { if (a[i] < a[i - 1]) { ok = false; } i++; }
	return ok;
}

int find_min(vector <int> a)
{
	int id_min = 0, i = 0, min = a[0];
	while (i < a.size()) { if (a[i] < min) { min = a[i], id_min = i; } i++; }
	return id_min;
}
