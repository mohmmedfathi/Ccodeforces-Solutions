#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    stack<char> ch;
    for (int i=0;i< s.size();i++)
    {
        if (!ch.empty()&&ch.top()==s[i])
            ch.pop();
        else
            ch.push(s[i]);
    }
    string ans = "";
    while(!ch.empty())
        ans+=ch.top(),ch.pop();
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
}