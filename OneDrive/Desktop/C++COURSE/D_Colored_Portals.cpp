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

void solve() {
    int n, q; 
    cin >> n >> q;
    vector<string> s(n); 
    for (auto &x : s) cin >> x;
    
    map<string, set<int>> m; 
    for (int i = 0; i < n; i++) m[s[i]].insert(i);

    while (q--) {
        int x, y; 
        cin >> x >> y; 
        x--, y--;
        if (x > y) swap(x, y);
        if (s[x][0]==s[y][0]||s[x][0]==s[y][1]||s[x][1]==s[y][0]||s[x][1]==s[y][1]||s[x]==s[y]) {
            cout << y - x << '\n';
            continue;
        }

        int ans = 1e9;
        for (auto xx : m) {
            string k = xx.first;
            set<int> &v = xx.second;
            if (k == s[x] || k == s[y]) continue;

            auto it = v.lower_bound(x);
            if (it != v.end()) ans = min(ans, *it - x);
            if (it != v.begin()) {
                it--;
                ans = min(ans, y - *it);
            }
        }

        if (ans > y - x && ans != 1e9) {
            ans = 2 * (ans - (y - x)) + (y - x);
        }
        ans = max(ans, y - x);
        if (ans == 1e9) ans = -1;

        cout << ans << '\n';
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
