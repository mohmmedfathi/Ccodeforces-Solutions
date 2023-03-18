#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    bool small = 0,quality = 0;
    while (n--)
    {
        int a,b;
        cin >> a >> b;
        if (a>b)
            small = 1;
        if (a<b)
            quality = 1;
    }
    if (quality&&small)
        cout << "Happy Alex" << endl;
    else
        cout << "Poor Alex" << endl;
 
}