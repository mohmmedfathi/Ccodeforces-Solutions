#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n,acounter=0,dcounter=0;
  string s;
  cin >> n >> s;
  for (int i=0;i<n;i++)
  {
      if (s[i]=='A')
        acounter++;
        else
        dcounter++;
  }
  if (acounter>dcounter)
    cout << "Anton" << endl;
  else if (acounter<dcounter)
    cout << "Danik" << endl;
    else
    cout << "Friendship" << endl;
}