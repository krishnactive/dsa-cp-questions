#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,0);

    for(int i=1;i<=n;i++){
        if(i<10){
            dp[i]=1;
        }
        else{
            string s = to_string(i);
            int mx = *max_element(begin(s), end(s))-'0';
            dp[i] = dp[i-mx]+dp[mx];
        }
    }
    cout<<dp[n];
}