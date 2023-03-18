#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int sz = 1e6;
int main()
{
    long long arr[100001],n,q;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> arr[i];
    sort(arr,arr+n);
    cin >> q;
 
    while(q--)
    {
        int x;
        cin >> x;
        cout << upper_bound(arr,arr+n,x) - arr << endl;
    }
 
}