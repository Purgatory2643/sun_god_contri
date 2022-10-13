#include <bits/stdc++.h>
#define int long long
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N = 1e15;
void Sun_god(){
  int n,q;
  cin>>n>>q;
  vector<vector<int> > dp(1001,vector<int> (1001,0));
  for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    dp[x][y]+=(x*y);
  }
  for(int i=1;i<1001;i++){
    for(int j=1;j<1001;j++){
      dp[i][j] += (dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1]);
    }
  }
  for(int i=0;i<q;i++){
    int hs,ws,hb,wb;
    cin>>hs>>ws>>hb>>wb;
    int ans = dp[hb-1][wb-1]-dp[hb-1][ws]-dp[hs][wb-1]+dp[hs][ws];
    cout<<ans<<"\n";
  }
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
