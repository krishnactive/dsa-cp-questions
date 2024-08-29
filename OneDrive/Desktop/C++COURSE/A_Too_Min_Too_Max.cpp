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
    ll n;
    cin>>n;
    vl a;
    fin(a,n);
  int mx=-1e9;
  int f=0,s=0,t=0,ff=0;
  st(a);
//   for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         f = abs(a[i]-a[j]);
//         for(int k=j+1;k<n;k++){
//             s=abs(a[j]-a[k]);
//             for(int l = k+1;l<n;l++){
//                 t=abs(a[k]-a[l]);
//                 for(int g=l+1;g<n;g++){
//                     ff=abs(a[l]-a[g]);
//                     mx = max(mx,(int)(f+s+t+ff));
//                 }
//             }
//         }
//     }
//   }
cout<<abs(a[0]-a[n-1])+abs(a[n-1]-a[1])+abs(a[1]-a[n-2])+abs(a[n-2]-a[0]);
  cout<<"\n";

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
