#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
int main()
{
 string x;
 cin >> x;
 for (int i = 0; i < x.size(); i++)
 {
  //"A", "O", "Y", "E", "U", "I"
  if (x[i] == 'a' || x[i] == 'o' || x[i] == 'y' || x[i] == 'u' || x[i] == 'i' || x[i] == 'A' || x[i] == 'O' || x[i] == 'Y' || x[i] == 'U' || x[i] == 'I' || x[i] == 'E' || x[i] == 'e')
   continue;
 
  cout << "." << static_cast<char>(tolower(x[i]));
 }
 return 0;
}