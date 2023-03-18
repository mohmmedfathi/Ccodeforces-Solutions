#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string a,b;
    cin >> a >> b;
    int aSize = a.size()-1;// 10
    int bSize = b.size()-1;
 
    // 012345678 9
    // codeforc es     y
    while(aSize>=0&&bSize>=0&&a[aSize]==b[bSize])
    {
        aSize--,bSize--;
        //cout << aSize << " " <<  bSize  << endl;
    }
    cout << aSize + bSize +2 << endl;
}
 