#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(v) (v.begin()),(v.end())
#define endl "\n"
#define ll long long
//v.erase(remove(v.begin(),v.end(),x),v.end()); /*erase-remove idiom.*/
//v.erase(v.find(x)); --> multiset
// v[10][10] vector<vector<int>>v5(10,vector<int>(10));
 
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
bool myCmp (int a,int b)
{
    return a>b; /* in sort : descending
                * set : ascending   */
}
int count_ones(int N)
{
    int count1 = 0;
    while (N > 0)
    {
        if (N & 1)
        {
            count1++;
        }
        N = N >> 1;
    }
    return count1;
}
 
int digits (int num)
{
    int ans = 0;
    while(num)
    {
        ans++;
        num/=10;
    }
    return ans;
}
char s[555];
void print(int n,int idx)
{
    if (n==idx)
    {
        cout << s[0] <<s[1] << endl;
        return;
    }
    for (char a='a';a<='z';a++)
    {
 
        s[idx] = a;
        print(n,idx+1);
    }
}
long long calc (long long n)
{
    return ((n*(n+1))/2);
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long n; cin >> n;
        long long ans = calc(n);
        long long sum = 0;
        for (int i=0;i<32;i++)
        {
            long long x = pow(2,i);
            if (x>n) break;
            else
                sum+=x;
        }
        ans -=(sum*2);
        cout << ans << endl;
    }
 
}