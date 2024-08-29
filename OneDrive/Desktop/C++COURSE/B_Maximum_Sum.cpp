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
const int Mod = 1000000007;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

void solve() {
    ll n,k;
    cin>>n>>k;
    vl a;
    fin(a,n);
    int max_sum = -1e9;
    int cur_sum = 0;
    int sum = 0;
    // int sum = accumulate(begin(a),end(a));
    for(int i=0;i<n;i++){
        sum+=(a[i]+Mod)%Mod;
        cur_sum+=a[i];
        if(cur_sum<0) cur_sum=0;
        max_sum = max(cur_sum,max_sum);
    }
    int ex_sum = 0;
    // k--;
    while(k--){
        max_sum%=Mod;
        ex_sum+=(max_sum)%Mod;
        max_sum+=max_sum;
    }
    // ex_sum = (ex_sum)%Mod;

    cout<<(sum+ex_sum)%Mod<<"\n";
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
