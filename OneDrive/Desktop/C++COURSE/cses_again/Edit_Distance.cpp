#include <bits/stdc++.h>
using namespace std;
int dp[5001][5001];
int solve(int i, int j ,string& s1,string& s2){
    if(i == s1.length()|| j == s2.length()){
        return  max(s2.length()-j , s1.length()-i);
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans = 0;
    if(s1[i] == s2[j]){
        ans = solve(i+1, j+1,s1,s2);
    }
    else{
        int op1 = 1+ solve(i,j+1,s1,s2);//add;
        int op2 = 1+solve(i+1,j,s1,s2); //mbuf_remove
        int op3 = 1+solve(i+1,j+1 ,s1,s2);// replace
        ans = min(op1, min(op2, op3));
    }
    
    return dp[i][j] = ans;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    memset(dp, -1, sizeof(dp));
    string s1,s2;
    cin>>s1>>s2;

    cout<<solve(0,0,s1, s2); //top down

}