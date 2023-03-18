#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s; // x++
    int t,counter=0;
    cin >> t;
    while (t--)
    {
        cin >> s; // 3  ++x   x++    --x    x--
        if (s[1]=='+')
            counter++;
        else
            counter--;
    }
    cout << counter << endl;
}