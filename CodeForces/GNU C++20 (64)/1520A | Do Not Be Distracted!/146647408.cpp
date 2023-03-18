#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    string s;
    int t,n; cin >> t;
    while (t--)
    {
        //int freq[26] = {};
        map <char,int>mp;
 
         cin >> n >> s;
         bool specious = false;
         //freq[s[0] - 'a']++;
         mp[s[0]]++;
         for (int i = 1;i < n;i++)
         {
             if (mp[s[i]]>=1&&s[i]!=s[i-1])
             {
                 specious = true;
                 break;
             }
             else
                mp[s[i]] ++;
         }
         if (specious)
            cout << "NO" << endl;
         else
            cout << "YES" << endl;
 
    }
}
 