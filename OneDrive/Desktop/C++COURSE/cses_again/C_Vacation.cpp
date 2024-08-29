#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<vector<int>> v(n+1,vector<int>(4));
    for(int i=1;i<=n;i++)
    {
        for(int j = 1;j<=3;j++)
        {
            cin>>v[i][j];
        }
    }

    vector<vector<int>> dp(n+1, vector<int>(4));

    for(int i = 1;i<=n;i++){
        
        for(int j =1;j<=3;j++){ //ek din phle ka j
            for(int k = 1;k<=3;k++){ //usdin ka k
                if(k==j)continue;
                dp[i][k] = max(dp[i][k], dp[i-1][j]+v[i][k]);
            }
        }
    }
    int ans = -1e9;
    for(int i = 1;i<=3;i++){
        ans = max(ans, dp[n][i]);
    }

    cout<< ans;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> dp(n + 1, vector<int>(4, -1));
    vector<vector<int>> opt(n, vector<int>(4));
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= 3; j++) cin >> opt[i][j];
    }

    function<int(int, int)> solve = [&](int ind, int day) -> int {
        if (day > n) return 0;
        if (dp[day][ind] != -1) return dp[day][ind];

        int result = 0;
        if (day == 1) {
            result = max({solve(1, day + 1) + opt[day - 1][1], solve(2, day + 1) + opt[day - 1][2], solve(3, day + 1) + opt[day - 1][3]});
        } 
        else if (ind == 1) {
            result = max(solve(2, day + 1) + opt[day - 1][2], solve(3, day + 1) + opt[day - 1][3]);
        } 
        else if (ind == 2) {
            result = max(solve(1, day + 1) + opt[day - 1][1], solve(3, day + 1) + opt[day - 1][3]);
        } 
        else {
            result = max(solve(1, day + 1) + opt[day - 1][1], solve(2, day + 1) + opt[day - 1][2]);
        }
        return dp[day][ind] = result;
    };

    int max_value = max({solve(1, 1), solve(2, 1), solve(3, 1)});
    cout << max_value;

    return 0;
}


*/
