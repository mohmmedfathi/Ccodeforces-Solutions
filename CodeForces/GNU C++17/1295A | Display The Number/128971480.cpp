#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        while (n)
        {
            if (n&1)
            {
                cout << 7;
                n-=3;
            }
            else
            {
                cout << 1;
                n-=2;
            }
        }
        cout << endl;
    }
}