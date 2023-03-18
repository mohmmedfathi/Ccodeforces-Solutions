#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
 
int main()
{
    int q; cin >> q;
    map<string,string> mp;
    while (q--)
    {
        string Old ,New;
        cin >> Old >> New;
        if (mp.find(Old)==mp.end())
            mp[Old] = Old;
        mp[New] = mp[Old];
        mp.erase(mp.find(Old));
    }
    cout << mp.size() << endl;
    for (auto v:mp)
        cout << v.second << " " << v.first << endl;
}