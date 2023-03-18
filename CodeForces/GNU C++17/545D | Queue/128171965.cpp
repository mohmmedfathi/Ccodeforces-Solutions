#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    long long arr[n] = {0};
    long long prefix[n] = {0};
    for (int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    int ans = 0;
    int wait = 0;
    for (int i=0;i<n;i++)
    {
        if (wait<=arr[i]){
 
            ans++;
            wait+=arr[i];
        }
    }
    cout <<  ans << endl;
}