#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,h,arr[1001],counter=0;
    cin>>n>>h;
    for (int i=0;i<n;i++){
        cin>>arr[i];
        if (arr[i]<=h)
            counter++;
        else
            counter+=2;
        }
    cout << counter <<endl;
}