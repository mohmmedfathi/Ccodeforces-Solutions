#include <bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#define LL long long
 
using namespace std;
const int max_n=1e5+5;
LL ans,a[max_n],b[max_n];
 
int main()
{
 long long n,m,k;
 cin >> n >> m >> k;
 for(LL i=0;i<n;i++)
 {
  cin >> a[i];
 }
 for(LL j=0;j<n-1;j++)
 {
  b[j]=a[j+1]-a[j];
 }
 sort(b,b+n-1);
 for(LL i=0;i<n-k;i++)
 {
  ans+=b[i];
 }
 cout << ans + k << endl;
 return 0;
}