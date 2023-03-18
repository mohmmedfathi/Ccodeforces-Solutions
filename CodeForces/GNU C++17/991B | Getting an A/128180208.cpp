#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
/*
int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }
*/
int main()
{
    int n; cin >> n;
    int arr[n];
    double sum = 0;
    int ans = 0;
    for (int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    float avg;
    avg = sum /(double) n;
    for (int i=0;i<n;i++)
    {
    if (avg>=4.5){
        cout << ans << endl;
        return 0;
    }
    else{
        sum+=(5-arr[i]);
        avg = sum/(double)n;
        ans++;
    }
    }
    cout << ans << endl;
}