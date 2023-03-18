#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n; cin >>n;
    int arr[110] = {};
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    //arr[0] = arr[n-1] = 0;
    int ans = 0;
    for (int i=0;i<n;)
    {
        if (arr[i]==1&&arr[i+1]==0&&arr[i+2]==1){
            ans++;
            i+=3;
    }
    else
        i++;
    }
    cout << ans << endl;
}