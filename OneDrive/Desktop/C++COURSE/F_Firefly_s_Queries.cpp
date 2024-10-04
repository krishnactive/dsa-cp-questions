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

const int maxn = 2e6 + 5;
ll n, a[maxn], q, T, pre[maxn];

// Function to solve the problem for each test case
void solve() {
    cin >> n >> q;
    ll sum = 0;
    pre[0] = 0;

    // Reading the array and building the prefix array
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
        a[i + n] = a[i];
        pre[i] = pre[i - 1] + a[i];
    }

    // Extending the prefix array for the circular structure
    for (int i = n + 1; i <= 2 * n; i++) {
        pre[i] = pre[i - 1] + a[i];
    }

    // Handling queries
    while (q--) {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        ll rig = r / n;
        ll lef = l / n;
        l %= n;
        r %= n;
        cout << ((rig - lef + 1) * sum - pre[lef + l] + pre[lef] - pre[rig + n] + pre[rig + r + 1]) << "\n";
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
    
    cin >> T;
    while (T--) solve();

    return 0;
}

// This is Krishna.
