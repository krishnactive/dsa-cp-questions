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
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

void solve() {
    ll n;
    cin>>n;
    vl a;
    vl v[n];
    for(int j=0;j<n;j++){
        int x;
        cin>>x;
        for(int i=0;i<x;i++){
            int y;
            cin>>y;
            a.push_back(y);
            v[j].push_back(y);
        }
    }

    st(a);
    ll ans1=n;

    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size()-1;j++){
            int k=lower_bound(a.begin(),a.end(),v[i][j])-a.begin();
            if(k==a.size()-1)ans1++;
            else if(v[i][j+1]!=a[k+1])ans1++;
        }
    }
  cout<<ans1-n<<" "<<ans1-1<<"\n";

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
