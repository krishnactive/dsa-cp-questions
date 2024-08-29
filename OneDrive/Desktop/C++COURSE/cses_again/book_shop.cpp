#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x;
    cin>>x;
    vector<int> price(n+1);
    for(int i=1;i<=n;i++){
        cin>>price[i];
    }
    vector<int> pages(n+1);
    for(int i=1;i<=n;i++){
        cin>>pages[i];
    }

    vector<vector<int>> dp(n+1, vector<int>(x+1));

    for(int i=1;i<=n;i++){
        for(int total_price = 0; total_price<=x;total_price++){
            if(total_price == 0){
                dp[i][total_price] = 0;
            }
            else{
                int optn1 = (i==1)?0:dp[i-1][total_price];
                int optn2 = (total_price<price[i])?0:dp[i-1][total_price-price[i]]+pages[i];
                dp[i][total_price] = max(optn1,optn2);
            }
        }
    }
    cout<<dp[n][x];

}