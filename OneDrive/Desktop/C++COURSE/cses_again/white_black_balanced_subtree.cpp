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
const int N = 4007;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
    uniform_int_distribution<int> uid(0, lim-1);
    return uid(rang);
}

vector<int> g[N + 1];
int ans = 0;

pair<int, int> dfs(int node, vector<bool>& vis, string& s) {
    vis[node] = true;
    int b = (s[node - 1] == 'B') ? 1 : 0;
    int w = (s[node - 1] == 'W') ? 1 : 0;

    for (auto child : g[node]) {
        if (!vis[child]) {
            auto it = dfs(child, vis, s);
            b += it.first;
            w += it.second;
        }
    }

    if (b == w) ans++;
    return {b, w};
}

void solve() {
    ll n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        int x;
        cin >> x;
        g[x].pb(i);
    }
    string s;
    cin >> s;
    vector<bool> vis(n + 1, false);
    dfs(1, vis, s);
    cout << ans << "\n";
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
        for (int i = 0; i <= N; ++i) g[i].clear();
        ans = 0;
    }

    return 0;
}
// This is krishna.
