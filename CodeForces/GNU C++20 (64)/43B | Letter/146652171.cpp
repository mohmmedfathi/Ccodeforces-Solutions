#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    string s,t;
    getline(cin,s);
    getline(cin,t);
    map<char,int>mps,mpt;
    bool anonymous = true;
    int j = 0;
    for (int i = 0 ; i < s.size();i++){
           mps[s[i]]++;
           if (j<=t.size()-1){
              mpt[t[j]]++;
              j++;
           }
    }
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
 