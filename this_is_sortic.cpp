#include "Header.h"

void sortic(vector <int>& a, vector <int>& b)
{
	int i = 0, id_min = -1;
	while (a.size() != 0)
	{
		id_min = find_min(a);
		while (i < id_min)
		{
			ra(a);
			cout << "ra" << endl;
			i++;
		}
		i = 0;
		pb(a, b);
		cout << "pb" << endl;
	}
	while (b.size() != 0)
	{
		pa(a, b);
		cout << "rb" << endl;
	}
}

bool is_sorted(vector <int>& a)
{
	bool ok = 1;
	int i = 1;
	while (i < a.size()) { if (a[i] < a[i - 1]) { ok = 0; } i++; }
	return ok;
}

int find_min(vector <int> a)
{
	int id_min = 0, i = 0, min = a[0];
	while (i < a.size()) { if (a[i] < min) { min = a[i], id_min = i; } i++; }
	return id_min;
}
