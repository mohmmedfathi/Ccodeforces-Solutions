#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
//char freq[26];
int main()
{
    int counter=0;
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    for (int i=0;i<s.size();i++)
    {
        if (s[i]>=97&&s[i]<=122)
        {
            counter++;
            if (s[i]==s[i+1])
                counter--;
        }
    }
    cout << counter << endl;
}