//frq array
 
#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 1e3+5;
 
int n;
int cnt[N];
 
int main(){
 int idx = 0;
 cin >> n;
 for(int i = 1; i <= n; i++){
  int x;
  cin >> x;
  
  cnt[x] ++;
  if(cnt[idx] <= cnt[x]){
   idx = x;
   //cout << idx << " " << cnt[idx] << endl;
  }
 }
 cout << cnt[idx] << endl;
}