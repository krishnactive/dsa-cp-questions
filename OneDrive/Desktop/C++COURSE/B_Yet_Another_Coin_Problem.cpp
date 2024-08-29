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
#define int long long
#define min fmin
#define max fmax
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}
 int mc(int n) {
    int dp[n + 1];
    dp[0] = 0;
    
    for (int i = 1; i <= n; i++) {
        dp[i] = INT_MAX;
        if (i >= 15) dp[i] = min(dp[i], dp[i - 15] + 1);
        if (i >= 10) dp[i] = min(dp[i], dp[i - 10] + 1);
        if (i >= 6) dp[i] = min(dp[i], dp[i - 6] + 1);
        if (i >= 3) dp[i] = min(dp[i], dp[i - 3] + 1);

        if (i >= 1) dp[i] = min(dp[i], dp[i - 1]+1);
    }
    return dp[n];
}
void solve() {
    ll n;
    cin>>n;
    int cc[] = { 15,10,6,3,1};
int fans=0;
int ct=0;
// cout<<mc(n)<<"\n";
    for(int i=0;i<5;i++){
        if(n>=cc[i]){
            ct=cc[i];
            break;
        }
    }
        int ans =n/ct;
        fans=ans;
// cout<<mc(n)<<"\n";
        fans = ans-1;
        n%=ct;
        n+=ct;
        fans+=mc(n);
        cout<<fans<<"\n";
        return;

    // cout<<mc(n)<<"\n";
    // int ans = n/15;
    // n=n%15;
    // ans+= n/10;
    // n=n%10;
    // ans+=n/6;
    // n=n%6;
    // ans+=n/3;
    // n=n%3;
    // ans+=n;
    // cout<<ans<<"\n";
  
}

signed main() {
    fastio
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout << setprecision(15);

    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    // mc();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
