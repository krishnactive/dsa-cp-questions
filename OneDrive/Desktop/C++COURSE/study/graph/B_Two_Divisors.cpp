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
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

void solve() {
    ll n , m;
    cin>>n>>m;
    // vl a;
    // fin(a,n);
ll mx = max(n,m);
ll mi = min(n,m);
ll x = 1;
ll i=2;
// if(mi==1){
//     cout<<mx*mx<<"\n";
//     return;
// }
// while(true){
//     x=mx*i;
//     if(x%mi==0){
//         cout<<x<<"\n";
//         return;
//     }
    
//     i++;
// }  
ll cc = (n*m)/__gcd(n,m);
// if(cc==n||cc==m){
//     cout<<cc*mi<<"\n";
// }
// else cout<<cc<<"\n";
if(cc ==m){
    cout<<cc*(m/n)<<"\n";
}
else cout<<cc<<"\n";
// cout<<(n*m)/__gcd(n,m)<<"\n";
}

int main() {
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
