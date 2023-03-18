#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
 
int main()
{
    int n; cin >> n;
    int arr[maxn];
    for (int i=1;i<=n;i++)
         cin >> arr[i];
    sort(arr+1,arr+1+n);
    int l = 1,r = n;
    for (int i=1;i<=n;i++)
    {
        if (i%2==0)
            cout << arr[r--];
        else
            cout << arr[l++];
        cout << " \n"[i==n];
    }
}