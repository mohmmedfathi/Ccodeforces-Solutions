#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 1e3+5;
 
int n;
int ar[N];
 
int main(){
 cin >> n;
 for(int i = 1; i <= n; i++){
  cin >> ar[i];
 }
 sort(ar + 1 , ar + n + 1);
 int mx = 1 , cnt = 1;
 for(int i = 1; i <= n; i++){
  if(ar[i] == ar[i - 1]){
   cnt++;
   mx = max(mx , cnt + 1);
  } else {
   cnt = 0;
  }
 }
 cout << mx << "\n";
}