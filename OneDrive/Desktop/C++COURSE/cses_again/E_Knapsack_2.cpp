#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,w;cin>>n>>w;
    vector<vector<int>> v(n+1, vector<int> (3,0));
    int val = 0;
    for(int i = 1;i<=n;i++){
        cin>>v[i][1]>>v[i][2];
        val+=v[i][2];
    }
//      vector<vector<int>> dp(n+1, vector<int>(val+1,-1));

//     auto ok = [&](int mid)->bool{
//         function<int(int,int)> find = [&](int ind, int left)->int{
//             if(left==0)return 0;
//             if(ind<=0)return 1e18;
//             if(dp[ind][left]!=-1) return dp[ind][left];
//             if(left>=v[ind][2])
//                 return dp[ind][left] = min(find(ind-1, left), find(ind-1,left-v[ind][2])+v[ind][1]);
//             else{
//                 return dp[ind][left] = find(ind-1, left);
//             }
//         };
//         int ww = find(n,mid);
//         if(ww<=w)return true;
//         return false;
    
//     };
// for(int i = val;i>=0;i--){
//     if(ok(i)){
//         cout<<i;
//         break;
//     }
// }




vector<vector<int>> dp(n+1, vector<int>(val+1,1e18));
dp[0][0] = 0;

for(int i = 0;i<=val;i++){
    for(int  j = 1;j<=n;j++){
        dp[j][i] = dp[j-1][i];
        if(i>=v[j][2])
            dp[j][i] = min(dp[j][i] , dp[j-1][i-v[j][2]]+v[j][1]);
    }
}

for(int i = val;i>=0;i--){
    if(dp[n][i]<=w){
        cout<<i;
        break;
    }
}

}