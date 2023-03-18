#include <bits/stdc++.h>
using namespace std;
 
int freq[26];
 
int main()
{
    int val = 0;
    string str;
    cin >> str;
    int sz = str.size();
    for (int i=0; i<sz; i++)
    {
        if (freq[str[i]-'a']==0){
            freq[str[i]-'a']++; // a ----> 97
            val++;
        }
    }
    //cout << val << endl;
    if (val%2==0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}