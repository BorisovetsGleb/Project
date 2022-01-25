#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
#include <vector>

using namespace std;

//f1.cpp
void sa(vector <int>& a);
void sb(vector <int>& b);
void ss(vector <int>& a, vector <int>& b);
void pa(vector <int>& a, vector <int>& b);
void pb(vector <int>& a, vector <int>& b);

//f2.cpp
void ra(vector <int>& a);
void rb(vector <int>& b);

//out.cpp
void out(vector <int> a);
int str_to_int(string a);

//this_is_sortic.cpp
void sortic(vector <int>& a, vector <int>& b);
bool is_sorted(vector <int>& a);
int find_min(vector <int> a);

#endif // HEADER_H_INCLUDED
