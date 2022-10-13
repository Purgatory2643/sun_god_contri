#include <bits/stdc++.h>
#define int long long
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N = 1e15;
void Sun_god(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  vector<pair<int,int> > v;
  for(int i=0;i<n;i++){
    if(s[i]=='R') {
      int x = n-1-2*i;
      v.push_back({x,n-1-i});
    }
    else {
      int x = 2*i+1-n;
      v.push_back({x,i});
    }
  }
  sort(v.begin(),v.end());
  vector<int> neg;
  int ans = 0;
  for(int i=0;i<n;i++){
    if(v[i].first<0) neg.push_back((-1)*v[i].first);
    ans += v[i].second;
  }
  vector<int> sum(neg.size(),0);
  for(int i=0;i<neg.size();i++){
    if(i==0) sum[i] = neg[i];
    else sum[i] = sum[i-1] + neg[i];
  }
  int m = neg.size();
  //cout<<ans<<"\n";
  for(int k=1;k<=n;k++){
    int x =  ans;
    if(k>m && m) x += sum[m-1];
    else if(m) x += sum[k-1];
    cout<<x<<" ";
  }
  cout<<"\n";
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
