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

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

void solve() {
	ll n;
    cin>>n;
    vl a,b,c;

    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        a.pb(x);
    }
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        b.pb(x);
    }
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        c.pb(x);
    }

ll am= *max_element(a.begin(),a.end());
ll bm= *max_element(b.begin(),b.end());
ll cm= *max_element(c.begin(),c.end());


int ca = count(a.begin(),a.end(),am);
int cb = count(b.begin(),b.end(),bm);
int cc = count(c.begin(),c.end(),cm);
ll ans = 0;
if(ca!=cb&&cb!=cc&cc!=ca){
    cout<<am+bm+cm<<"\n";
}
else if(ca>=2)


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


