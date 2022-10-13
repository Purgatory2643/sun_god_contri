#include <bits/stdc++.h>
#define int long long
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N = 1e15;
void Sun_god(){
  int n;
  
  cin>>n;
  if(n==3){
    cout<<"2 1 3\n"; 
    return;
  }
  vector<int> a(n+2,0),b(n+2,0);
  bool bj=0;
  if(n%2) n--,bj=1;
  for(int i=1;i<=n;i+=2) a[i]=i/2+1;
  for(int i=2;i<=n;i+=2) a[i]=i/2;
  if(n%4==0){
    for(int i=2;i<=n;i+=2) a[i]|=(1<<30);
  }
  else{
    for(int i=2;i<n;i+=2) a[i]|=(1<<30);
    for(int i=n;i>=4;i-=2) a[i]|=(1<<29);
  }
  if(bj) a[++n]=0;
  for(int i=1;i<=n;i++) cout<<a[i]<<" \n"[i==n];
}
signed main(){
  faster
  int t=1;
  cin>>t;
  while(t--){
    Sun_god();
  }
  return 0;
}
