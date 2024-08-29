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
#define int long long
#define min fmin
#define max fmax
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

void solve() {
    int n,k;cin>>n>>k;
    int fans = 1e9;
    bool pass = false;
    vector<vector<int>> rec(n+1,vector<int>(2));
    ll ch = 0;
    for(int i=1;i<=n;i++){
        cin>>rec[i][0]>> rec[i][1];
    }
    vector<vector<int>> cost(n+1, vector<int>(1007, 1e9));
    vector<vector<int>> dp(n + 1, vector<int>(1007, 1e9));
    dp[0][0] = 0;
    for(int i=1;i<=n;i++){
        for(int r=0;r<=rec[i][0];r++){
            for(int c=0;c<=rec[i][1];c++){
                cost[i][r+c] = min(cost[i][r+c],r*rec[i][1]+c*rec[i][0]-r*c);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int a=0;a<=k;a++){
            for(int b =0;a+b<=k&&b<=rec[i][0]+rec[i][1];b++){
                dp[i][a+b] = min(dp[i-1][a]+cost[i][b], dp[i][a+b]);
            }
        }
    }
    if(dp[n][k]>=1e9){
        cout<<"-1\n";
    }
    else{
        cout<<dp[n][k]<<"\n";
    }
    
}

signed main() {
    fastio
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout << setprecision(15);

    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
