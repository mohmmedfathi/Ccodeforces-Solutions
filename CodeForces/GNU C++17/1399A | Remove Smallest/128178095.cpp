#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int arr[n];
        for (int i=0;i<n;i++)
            cin >> arr[i];
        sort(arr,arr+n);
        for (int i=1;i<n;i++)
        {
            if (abs(arr[i] - arr[i-1])<=1)
            {
                arr[i-1] = -1;
            }
        }
        int flag = 0;
        for (int i=0;i<n;i++)
        {
            if (arr[i]!=-1)
                flag++;
        }
        if (flag==1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
 
    }
}