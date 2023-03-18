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
// https://www.youtube.com/watch?v=NhORPJufQ-s file prossing c++
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
bool getBit(int n,int pos)
{
    return n&= (1<<pos);
}
void setBit(int &n,int pos)
{
    n |= (1<<pos);
}
void clearBit(int &n,int pos)
{
    n = n&~(1<<pos);
}
 
void printThatBinary (long long n)
{
    if (!n)
        return;
    printThatBinary(n>>1);
    cout << (n&1);
}
int ri()
{
    int n;
    scanf("%d", &n);
    return n;
}
int setBit0(int num, int idx)
{
    return num & ~(1<<idx);    // 110100, idx = 3  -->  110100 & ~000100 = 110100 & 111011
}
 
long long fact(int n)
{
    if (!n) return 1;
    return n*fact(n-1);
}
 
int fib (int n)
{
    if (n<2)
        return n;
    return fib(n-1) + fib(n-2);
}
int n;
int solve (int lucky=0,int index=0)
{
        cout << "e" << endl;
    if (lucky>n)
        return -1;
    else if (lucky==n)
        return index;
    return max(solve(lucky*10+4,index*2+1),solve(lucky*10+7,index*2+2));
}
 
 
int main()
{
    int x,cnt=0;
    cin >> x;
    while (x)
    {
        if (x&1) cnt++;
            x>>=1;
    }
    cout << cnt << endl;
}