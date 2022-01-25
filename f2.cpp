#include "Header.h"

void ra(vector <int>& a)
{
	int i = 1;
	vector <int> out;
	while (i < a.size()) { out.push_back(a[i]); i++; }
	out.push_back(a[0]);
	a = out;
}
void rb(vector <int>& b)
{
	int i = 1;
	vector <int> out;
	while (i < b.size()) { out.push_back(b[i]); i++; }
	out.push_back(b[0]);
	b = out;
}
