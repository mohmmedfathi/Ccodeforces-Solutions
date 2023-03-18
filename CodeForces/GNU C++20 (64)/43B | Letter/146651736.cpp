#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    string s,t;
    getline(cin,s);
    getline(cin,t);
    map<char,int>mps,mpt;
    for (int i = 0 ; i < s.size();i++){
        if (s[i]==' ')
            continue;
           mps[s[i]]++;
    }
    for (int i = 0 ; i < t.size();i++){
        if (t[i]==' ')
            continue;
        mpt[t[i]]++;
    }
        
 
    bool anonymous = true;
    for (int i = 0 ; i < t.size();i++)
    {
         if (t[i]==' ')
            continue;
        if (!(mps[t[i]]>=mpt[t[i]]))
        {
            anonymous = false;
            break;
        }
    }
    if (anonymous)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
 