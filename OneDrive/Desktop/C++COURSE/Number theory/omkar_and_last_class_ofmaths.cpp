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
#define min fmin
#define max fmax
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}
vector<bool> prime;
void sieve(int n){
    prime.resize(n+1,true);
    prime[0]=prime[1]=false;
    for(ll i=2;i*i<=n;i++){
        if(prime[i]){
            for(ll j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
}

void solve() {
    ll n;
    cin>>n;
    // if(prime[n]){
    //     cout<<n-1<<" "<<1<<"\n";
    //     return;
    // }
    int fa=0;
    int fb = 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            fa = i;
            cout<<n/fa<<" "<<n-n/fa<<"\n";
            return;
        }
    }
    cout<<n-1<<" 1\n";
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
    // sieve(1e9);
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
