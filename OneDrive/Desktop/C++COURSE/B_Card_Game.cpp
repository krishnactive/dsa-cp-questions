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
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    
    int ans=0;
    vector<pair<int, int>> sc = {{a1, b1}, {a1, b2}, {a2, b1}, {a2, b2}};
    
    for (int i = 0; i < 4; i++) {
        int af = sc[i].first;
        int bf = sc[i].second;
        int as = (i < 2) ? a2 : a1;
        int bs = (i % 2 == 0) ? b2 : b1;
        int st = 0;
        int slt = 0;
        if (af > bf)
            st++;
        else if (bf > af)
            slt++;
        if (as> bs)
            st++;
        else if (bs>as)
            slt++;
        if (st > slt)
            ans++;
    }

    cout <<ans<< endl;
}

signed main() {
    fastio
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout << setprecision(15);

    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
