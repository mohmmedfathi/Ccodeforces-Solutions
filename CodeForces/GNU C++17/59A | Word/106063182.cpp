#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string str;
    cin >> str;
    int s = 0,c=0;
    for (int i=0; i<str.size(); i++)
    {
        if (str[i]>=97&&str[i]<=122)
            s++;
        else if (str[i]>=65&&str[i]<=90)
            c++;
    }
    if(s>=c)
    {
        for (int i=0; i<str.size(); i++)
        {
            cout << char(tolower(str[i]));
        }
    }
    else
    {
        for (int i=0; i<str.size(); i++)
        {
            cout << char(toupper(str[i]));
        }
    }
}