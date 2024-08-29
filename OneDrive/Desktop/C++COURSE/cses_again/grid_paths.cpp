#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> gr(n+1, vector<int>(n+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char x;
            cin>>x;
            if(x=='.')gr[i][j] = 0;
            else gr[i][j] = 1;
        }
    }
    if(gr[1][1]||gr[n][n]){
        cout<<0;
        return 0;
    }
    int dp[n+1][n+1];

    for(int i=n;i>0;i--){
        for(int j=n;j>0;j--){
            if(i==n && j==n){
                dp[i][j] = 1;
            }
            else{
                int optn1 = (i==n)?0:dp[i+1][j];
                int optn2 = (j==n)?0:dp[i][j+1];

                dp[i][j] = (optn1 + optn2)%mod;
                if(gr[i][j]){
                    dp[i][j] = 0;
                }
            }

        }
    }
    cout << dp[1][1] << endl;
}