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
    ll n;
    cin>>n;
    vl y;
    fin(y,n);
    vl p;
    fin(p,n);
    bool pass = true;
    int i =0;
    int j=1;
    int l1=0, r1=0,l2=0,r2=0;
    for(int i = 0;i<n-1;i++){
        if(y[i]+p[i]>=y[i+1]){
            l1 = i+1;
        }
        else break;
    }
    for(int i = n-1;i>=1;i--){
        if(y[i]+p[i]<=y[i-1]){
            r1=i-1;
        }
        else break;
    }
    for(int i=n-1;i>=1;i--){
        if(y[i]+p[i-1]<=y[i-1]){
            l2=i-1;
        }
        else break;
    }
    for(int i=0;i<n-1;i++){
        if(y[i]+p[i+1]>=y[i+1]){
            r2  =i+1;
        }
        else break;
    }

    int mx = max(l1,r2);
    int mn = min(l2,r1);
    int 
    if(mx+1>=mn){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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
