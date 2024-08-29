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
const int MOD = 1e9 + 7;
const int MAXN = 200005;

vector<long long> fact(MAXN), invFact(MAXN);


long long modPow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
void precomputeFactorials() {
    fact[0] = invFact[0] = 1;
    for (int i = 1; i < MAXN; ++i) {
        fact[i] = fact[i - 1] * i % MOD;
        invFact[i] = modPow(fact[i], MOD - 2, MOD); 
    }
}
long long binomial(int n, int k) {
    if (k > n || k < 0) return 0;
    return fact[n] * invFact[k] % MOD * invFact[n - k] % MOD;
}

void solve() {
    int n, k;
    cin>>n>>k;
    vl a; fin(a,n);
    int ones=0;int zeros = 0;

    for(int i=0;i<n;i++){
        ones+=a[i];

    }

    int ans = 0;
    for(int i = k/2+1;i<=min(k,ones);i++){
        ans += binomial(ones, i)*binomial(n-ones,k-i)%MOD;
        ans%=MOD;
    }
    cout<<ans<<"\n";

  

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
    precomputeFactorials();
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
