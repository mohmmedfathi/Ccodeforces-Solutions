#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
void ScanTeam(int team[], int team_id)
{
    int n, person_id;
    cin >> n;
    while(n--)
    {
        cin >> person_id;
        team[person_id] = team_id;
    }
}
 
int main()
{
    long long n,x,arr[100010];
    long long sum = 0;
    cin >> n >> x;
    for (int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    for (int i=0;i<n;i++){
            sum+=1ll*arr[i]*x;
        if(x>1)
            x--;
    }
    cout << sum << endl;
}