#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    int k;
    cin >> n >> k;
    while (k--){
        int d = n % 10;
        if (d==0)
            n/=10;
        else
            n-=1;
    }
    cout << n << endl;
}