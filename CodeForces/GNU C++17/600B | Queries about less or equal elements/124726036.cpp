#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 int n,m;
 long long a[1000001],b[1000001];
 cin >> n >> m;
 for (int i=0;i<n;i++)
        cin >> a[i];
    for (int i=0;i<m;i++)
        cin >> b[i];
    sort(a,a+n);
    for (int i=0;i<m;i++)
    {
        cout << (upper_bound(a,a+n,b[i]) - a) << " \n"[i==m-1] ;
    }
}