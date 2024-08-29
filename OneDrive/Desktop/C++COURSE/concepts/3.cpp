#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vl vector<ll>
#define umap unordered_map
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
mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

int r(int l) {
    uniform_int_distribution<int> uid(0, l-1);
    return uid(rng);
}

const int M = 1000002;
vi p;
vi spf(M, 0);

void calcSPF() {
    spf[1] = 1;
    for (int i = 2; i < M; ++i) {
        if (spf[i] == 0) {
            spf[i] = i;
            for (ll j = (ll)i * i; j < M; j += i) {
                if (spf[j] == 0) {
                    spf[j] = i;
                }
            }
        }
    }
}

void solve() {
    int k;
    cin >> k;
    ll res = 0;
    if (spf[k] == k) {
        for (int prime : p) {
            if (prime > k) break;
            res += (ll)prime * k;
        }
    } else {
        for (int prime : p) {
            if (prime > spf[k]) break;
            res += (ll)prime * k;
        }
    }
    cout << res << "\n";
}

signed main() {
    fastio
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout << setprecision(15);

    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif

    calcSPF();
    
    for (int i = 2; i < M; ++i) {
        if (spf[i] == i) {
            p.pb(i);
        }
    }
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
// This is krishna.
