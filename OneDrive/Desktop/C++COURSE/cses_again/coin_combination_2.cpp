#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define lld long double
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vl vector<ll>
#define ump unordered_map
#define uset unordered_set
#define mset multiset
#define minA(v) *min_element(v.begin(),v.end())
#define maxA(v) *max_element(v.begin(),v.end())
#define st(v) sort(v.begin(),v.end())
#define fin(a,n) for(int i=0;i<n;i++){ll x; cin>>x;a.pb(x);} 
#define f(n) for(ll i=0;i<n;i++)
#define f1(n) for(ll i=1;i<n;i++)
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define min fmin
#define max fmax
const int mod = 1000000007;

void solve() {
    int n,x;
    cin>>n>>x;
    vector<int> c(n+1);
    for(int i=1;i<=n;i++){
        cin>>c[i];
    }                   
    vector<vector<int>> dp(n+1, vector<int>(x+1, 0));
                  
    for(int i=1;i<=n;i++){   
        for(int sum = 0; sum<=x; sum++){
            if(sum == 0){
                dp[i][sum] = 1;
            }   
            else{
                int optn1 = (c[i]>sum) ? 0: dp[i][sum-c[i]];
                int optn2 = (i==1) ? 0:dp[i-1][sum];
                dp[i][sum] = (optn1 + optn2)%mod;
            }       
        }
    }
cout<<dp[n][x];
}

int main() {
    
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
