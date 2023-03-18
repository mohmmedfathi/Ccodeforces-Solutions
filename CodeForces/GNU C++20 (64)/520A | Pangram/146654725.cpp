#include <bits/stdc++.h>
 
using namespace std;
 
int freq[26];
int main()
{
    int n; cin >> n;
    string s;
    cin >> s;
    bool flag = 1;
    for (int i = 0;i<s.size();i++)
    {
        s[i] = tolower(s[i]);
        freq[s[i] - 'a']++;
    }
    for (char i ='a';i<='z';i++)
    {
        //cout << s[i] << " " << freq[s[i] - 'a'] << endl;
        if (freq[i - 'a']==0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout <<"NO" << endl;
}
 