#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int s,n,sum = 0;
    cin >> s >> n;
    vector<pair<int,int>> p;
    for (int i = 0; i<n; i++)
    {
        int x,y;
        cin >> x >> y;
        p.push_back(make_pair(x,y));
    }
    sort(p.begin(),p.end());
    for (int i = 0; i<n; i++)
    {
        if (s > p[i].first)
        {
            s+=p[i].second;
        }
        else{
            cout << "NO" << endl;
        return 0;
        }
    }
    cout << "YES" << endl;
}