#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
 
int main()
{
    int n; cin >> n;
    if (n<3) {cout << "NO" << endl; return 0;}
    long long arr[n];
    for (int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    for (int i=1;i<n-1;i++)
    {
        if (arr[i] + arr[i-1] > arr[i+1]) // 
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}