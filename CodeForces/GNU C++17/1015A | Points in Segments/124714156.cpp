#include <iostream>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;
int num [120];
bool vis[120];
int main()
{
    int n,m,l,r;
    cin >> n >> m;
    while(n--)
    {
        cin >> l >> r;
        for (int i=l;i<=r;i++)
            vis[i] = 1;
    }
    int ans = 0;
    for (int i=1;i<=m;i++)
        if (!vis[i])
        {
            ans++;
            num[ans] = i;
        }
    cout << ans << endl;
    for (int i=1;i<=ans;i++)
    {
        cout << num[i] << " \n"[i==m];
    }
}