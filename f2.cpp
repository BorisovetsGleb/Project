#include "Header.h"

void ra(vector<int>& a) {
    if (a.size() < 2) { return; }
    int next = a[1];
    int current = a[0];
    for (int i = 1; i < a.size(); ++i) {
        next = a[i];
        a[i] = current;
        current = next;
    }
    a[0] = current;
}

void rb(vector<int>& b) {
    if (b.size() < 2) { return; }
    int next = b[1];
    int current = b[0];
    for (int i = 1; i < b.size(); ++i) {
        next = b[i];
        b[i] = current;
        current = next;
    }
    b[0] = current;
}

void rr(vector<int>& a, vector<int>& b) {
    ra(a);
    ra(b);
}

void rra(vector<int>& a) {
    if (a.size() < 2) {
        return;
    }
    int next = a[1];
    int current = a[0];
    for (int i = 1; i < a.size(); ++i) {
        next = a[i];
        a[i] = current;
        current = next;
    }
    a[0] = current;
}

void rrb(vector<int>& b) {
    if (b.size() < 2) {
        return;
    }
    int next = b[1];
    int current = b[0];
    for (int i = 1; i < b.size(); ++i) {
        next = b[i];
        b[i] = current;
        current = next;
    }
    b[0] = current;
}

void rrr(vector<int>& a, vector<int>& b) {
    rra(a);
    rrb(b);
}