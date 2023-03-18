#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  short t,x,y,z,c=0;
  cin >> t;
  while (t--)
  {
      cin >> x >> y >> z;
      if (x+y+z>=2)
        c++;
  }
  cout << c << endl;
}