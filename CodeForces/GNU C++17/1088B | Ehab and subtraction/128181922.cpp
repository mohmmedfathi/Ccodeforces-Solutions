#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
/*
int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }
*/
int main()
{
    int n,k;
    cin >> n >> k;
    set<int>s;
    s.insert(0);
    for (int i=0;i<n;i++)
    {
        int x; cin >> x;
        s.insert(x);
    }
    auto it = s.begin();
    while (k--)
    {
        if (next(it)==s.end())
        {
            cout << 0 << endl;
        }
        else{
            cout << *next(it) - *it << endl;
            it=next(it);
        }
    }
}