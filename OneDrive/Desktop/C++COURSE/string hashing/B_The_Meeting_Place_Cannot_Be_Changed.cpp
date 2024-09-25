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

void solve() {
    lld n;
    cin>>n;
    vector<lld> a,b;
    for(int i=0;i<n;i++){
        lld x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        lld x;
        cin>>x;
        b.push_back(x);
    }
    auto ok = [&](lld mid)->bool{
        vector<pair<lld , lld>>p;
        for(int i=0;i<n;i++){
            lld l = a[i]-b[i]*mid;
            lld r = a[i] + b[i]*mid;
            p.push_back({l , r});
        }
        lld l = -1e9, r= 1e9;
    for(int i=0;i<n;i++){
        if(l>p[i].second||r<p[i].first){
            return false;
        }
        l = max(l,p[i].first);
        r = min(r,p[i].second);
    }
    return true;
    };
    
    lld lo= 0;
    lld hi = 1e9;
    lld ans =0;
    for(int i=0;i<100;i++){
        lld mid = hi-(hi-lo)/2;
        if(ok(mid)){
            ans = mid;
            hi = mid;
        }
        else{
            lo = mid;
        }
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
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
