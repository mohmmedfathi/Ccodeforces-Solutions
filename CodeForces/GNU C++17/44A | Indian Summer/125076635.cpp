#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(v) (v.begin()),(v.end())
#define endl "\n"
//v.erase(remove(v.begin(),v.end(),x),v.end()); /*erase-remove idiom.*/
//v.erase(v.find(x)); --> multiset
// v[10][10] vector<vector<int>>v5(10,vector<int>(10));
#define ll long long
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
bool myCmp (int a,int b)
{
    return a>b; /* in sort : descending
                * set : ascending   */
}
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
//int  freq[10000];
int main()
{
    /*
    int t,i; cin >> t;
    vector<pair<string,string>>name;
    name.resize(1);
    while (t--)
    {
        string x,y;
        cin >> x >> y;
        for(i=0; i<name.size(); i++)
            {
                if(name[i].second==x)
                {
                    name[i].second=y;
                    break;
                }
            }
    }
    cout << name.size() << endl;
    for (int i=0;i<name.size();i++)
        cout << name[i].first << " "  << name[i].second << endl;
    */
    int t;
    cin >> t;
    set<string>v;
    while(t--)
    {
         string x,y;
         cin >> x >> y;
         v.insert(x+"$"+y);
    }
    cout << v.size() <<endl;
 
}