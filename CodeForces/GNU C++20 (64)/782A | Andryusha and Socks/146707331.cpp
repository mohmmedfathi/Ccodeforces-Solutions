#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n; cin >> n;
    n *=2;
    map<int,int> mp;
    int x;
    int table = 0,ans = 0;
    for (int i = 0;i<n;i++)
    {
         cin >> x;
        if (mp[x]==0)
            {
                mp[x]++;
                table++;
            }
        else
            table--;
            ans = max(ans,table);
    }
    cout << ans << endl;
}
 