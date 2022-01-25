#include "Header.h"

void sa(vector <int>& a)
{
    vector <int> out = {};
    int i = 0;
    if (a.size() > 1) {
        while (i < a.size()) {
            if (i == 1) { out.push_back(a[0]); }
            if (i == 0) { out.push_back(a[1]); }
            if (i != 1 && i != 0) { out.push_back(a[i]); }
            i++;
        }
    }
    a = out;
}

void sb(vector <int>& b)
{
    vector <int> out = {};
    int i = 0;
    if (b.size() > 1) {
        while (i < b.size()) {
            if (i == 1) { out.push_back(b[0]); }
            if (i == 0) { out.push_back(b[1]); }
            if (i != 1 && i != 0) { out.push_back(b[i]); }
            i++;
        }
    }
    b = out;
}

void ss(vector <int>& a, vector <int>& b)
{
    vector <int> out = {};
    int i = 0;
    if (a.size() > 1) {
        while (i < a.size()) {
            if (i == 1) { out.push_back(a[0]); }
            if (i == 0) { out.push_back(a[1]); }
            if (i != 1 && i != 0) { out.push_back(a[i]); }
            i++;
        }
    }
    a = out;
    out = {};
    i = 0;
    if (b.size() > 1) {
        while (i < b.size()) {
            if (i == 1) { out.push_back(b[0]); }
            if (i == 0) { out.push_back(b[1]); }
            if (i != 1 && i != 0) { out.push_back(b[i]); }
            i++;
        }
    }
    b = out;
}

void pa(vector <int>& a, vector <int>& b)
{
    vector <int> out, out2;
    int i = 0, i2 = 1;
    if (b.size() != 0)
    {
        out.push_back(b[0]);
        while (i < a.size()) { out.push_back(a[i]); i++; }
        a = out;
        while (i2 < b.size()) { out2.push_back(b[i2]); i2++; }
        b = out2;
    }
}

void pb(vector <int>& a, vector <int>& b)
{
    vector <int> out, out2;
    int i = 0, i2 = 1;
    if (a.size() != 0)
    {
        out.push_back(a[0]);
        while (i < b.size()) { out.push_back(b[i]); i++; }
        b = out;
        while (i2 < a.size()) { out2.push_back(a[i2]); i2++; }
        a = out2;
    }
}
