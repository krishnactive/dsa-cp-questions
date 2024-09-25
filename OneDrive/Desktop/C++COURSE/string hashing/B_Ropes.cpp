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
    ll n ,k;
    cin>>n>>k;
    vl a;
    fin(a,n);
    auto ok = [&](lld mid)->bool{
        int cnt =0;
        for(int i=0; i<n;i++){
            cnt+= a[i]/mid;
            if(cnt>=k)return true;
        }
        return false;
    };
    lld lo = 0;
    lld hi = 1e7;
    lld ans = 0.0;
    for(int i=0;i<100;i++){
        lld mid = (hi+lo)/2.0;
        if(ok(mid)){
            ans = mid;
            lo = mid;
        }
        else{
            hi = mid;
        }
    }
    cout<<(lld)ans;
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

// can be done like this also
//concept hai bhai 
// while(lo<=hi){
//         lld mid = (hi+lo)/2.0;
//         if(hi-lo>1){
//         if(ok(mid)){
//             ans = mid;
//             lo = mid+1;
//         }
//         else{
//             hi = mid-1;
//         }
//     }
//     else{
//         if(ok(mid)){
//             ans = mid;
//             lo = mid+1e-15;
//         }
//         else{
//             hi = mid-1e-15;
//         }
//     }
// }