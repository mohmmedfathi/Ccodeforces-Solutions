#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    char x[105],y[105];
    cin >> x >> y;
    for (int i=0;i<100;i++)
    {
        if (x[i]>=65&&x[i]<=90)
            x[i]+=32;
        if (y[i]>=65&&y[i]<=90)
            y[i]+=32;
    }
    cout << strcmp(x,y)<< endl;
}