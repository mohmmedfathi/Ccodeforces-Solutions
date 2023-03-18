#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,x,y,z;
    cin >> n;
    int sumx =0,sumy=0,sumz=0;
    while (n--)
    {
        cin >> x >> y >> z;
        sumx = sumx - x;
        sumy = sumy - y;
        sumz = sumz - z;        
    }
    //cout << sumx << " " << sumy << " " << sumz << endl;
    if (sumx==0&&sumy==0&&sumz==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
 
}