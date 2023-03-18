#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int n; cin >> n;
    long long *arr = new long long [n];
    for (int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    int wait = 0,ans =0;
    for (int i=0;i<n;i++)
    {
        if (wait<=arr[i])
        {
            ans++,wait+=arr[i];
        }
    }
    cout << ans << endl;
}