#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
int main()
{
    int counter=0;
 short n;
 cin >> n;
 string s;
 cin >> s;
 for (int i=0;i<n;i++)
    {
        if (s[i]==s[i+1])
            counter++;
    }
    cout << counter << endl;
}