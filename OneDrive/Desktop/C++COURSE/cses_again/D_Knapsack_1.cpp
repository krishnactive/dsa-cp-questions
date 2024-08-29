#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,w;cin>>n>>w;
    vector<vector<int>> v(n+1, vector<int> (3,0));
    for(int i = 1;i<=n;i++){
        cin>>v[i][1]>>v[i][2];
    }
    // vector<vector<int>> dp(n+1, vector<int>(w+1,-1));

    /*function<int(int ,int)> find = [&](int ind , int left)-> int{
        if(ind>n)return 0;
        if(dp[ind][left]!=-1)return dp[ind][left];
        if(left+v[ind][1]<=w){
             return dp[ind][left] = max({dp[ind][left] , find(ind+1,left) , find(ind+1,left+v[ind][1])+v[ind][2]});
        }
        else
            return dp[ind][left] = max( dp[ind][left] , find(ind+1,left) );
       
    };
    cout<<find(1,0);
    
    */
vector<vector<int>> dp(n+1, vector<int>(w+1,0));
for(int i = 0;i<=w;i++){
    for(int j = 1;j<=n;j++){
        if(i>=v[j][1])
            dp[j][i] = max({dp[j][i],dp[j-1][i], dp[j-1][i-v[j][1]]+v[j][2]}); //current w ko hatao i-v[j][1]
        else{
            dp[j][i] = max(dp[j][i] , dp[j-1][i]);
        }
    }
}
 
    cout<<dp[n][w];

}