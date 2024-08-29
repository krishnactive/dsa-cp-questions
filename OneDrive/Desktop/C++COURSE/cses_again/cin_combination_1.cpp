#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;

int main(){
    int n , x;
    cin>>n>>x;
    vector<int> coins(n+1);
    for(int i =1;i<=n;i++){
        cin>>coins[i];
    }

    vector<int> dp(x+1);

    for(int sum = 0;sum<=x;sum++){
        for(int i=1;i<=n;i++){
            if(sum == 0){
                dp[sum] = 1;
            }
            else{
                dp[sum] = (dp[sum] + ((coins[i]>sum)?0:dp[sum - coins[i]])) %mod;
            }
        }
    }
    cout<<dp[x];
}