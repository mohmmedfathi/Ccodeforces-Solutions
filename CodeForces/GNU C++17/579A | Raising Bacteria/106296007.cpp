#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int x,i=0,cnt=0;
    cin>> x;
    while (x)
    {
        if (x&1) cnt+=1;
        x>>=1;
    }
    cout << cnt << endl;
}