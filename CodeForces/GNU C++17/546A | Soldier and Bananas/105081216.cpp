#include<iostream>
using namespace std;
int main()
{
    int k,w,sum=0;
    long long n;
    cin >> k >> n >> w;
    for (int i=1;i<=w;i++)
    {
        sum+=i*k;
    }
    if (sum-n>0)
    cout << sum - n << endl;
    else
        cout << 0 << endl;
}