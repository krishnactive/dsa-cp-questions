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
    vl c= {1,5,10,50,100,500};
    vl fr(6,0ll);
    for(int i=0;i<6;i++){
        cin>>fr[i];
    }
int n;
cin>>n;
vl mm(n,0ll);
for(int i = 0;i<n;i++){
    cin>>mm[i];
}
for(auto x:mm){
    for(int i=5;i>=0;i--){
        int rem = x/c[i];
        if(rem>=fr[i]){
            x-=fr[i]*c[i];
            fr[i]=0;
        }
        else{
            x-=rem*c[i];
            fr[i]-=rem;
        }
    }
    if(x!=0){
        cout<<"No\n";
        return;
    }
}
  cout<<"Yes\n";
  return;

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
