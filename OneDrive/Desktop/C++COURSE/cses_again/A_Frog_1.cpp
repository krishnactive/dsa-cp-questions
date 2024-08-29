#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
  int n;cin>>n;
  vector<int> h(n+1,0);for(int i=1;i<=n;i++)cin>>h[i];
  vector<int> dp(n+1,1e18);

  dp[1] = 0;
  dp[2] = abs(h[1]-h[2]);
  for(int i=3;i<=n;i++){
    dp[i] = fmin(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
  }
  cout<<dp[n];
  return 0;
}