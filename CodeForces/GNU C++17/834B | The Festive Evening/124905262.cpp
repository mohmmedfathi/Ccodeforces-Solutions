#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(v) (v.begin()),(v.end())
#define endl "\n"
//v.erase(remove(v.begin(),v.end(),x),v.end()); /*erase-remove idiom.*/
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
bool myCmp (int a,int b){
    return a>b; /* in sort : descending
                * set : ascending   */
}
int rest[500],now[500];
char s[1000000];
int main()
{
 
    int n,k;
    cin >> n >> k;
 
    scanf("%s",s+1);
    for (int i = 1;i <= n;i++)
        rest[s[i]]++;
    int temp = 0;
    for (int i = 1;i <= n;i++){
        now[s[i]]++;
        //cout << s[i] << " " <<now[s[i]] << " "  << i << " ";
        if (now[s[i]]==1){
          //  cout << s[i] << " entered" << endl;
            temp++;
            if (temp>k){
                cout << "YES" << endl;
                return 0;
            }
        }
        //cout << s[i] << " " << now[s[i]] << " " << rest[s[i]] << endl;
        if (now[s[i]]==rest[s[i]]){
            temp--;
        }
    }
    cout << "NO" << endl;
    return 0;
 
}
/*
    int n; cin >> n;
    long long arr[200000];
    for (int i=0;i<n;i++){
        cin >> arr[i];
        freq[arr[i]]++;
 
    }
    int ans = 0;
    for (int i=0;i<n;i++)
    {
        if (freq[arr[i]]>=n){
            ans+= freq[arr[i]]- n;
        }
        else if (arr[i]!=freq[i]&&vis[i]==0)
        {
            ans+= freq[arr[i]];
            vis[i] = 1;
        }
    }
    cout << ans << endl;
    */