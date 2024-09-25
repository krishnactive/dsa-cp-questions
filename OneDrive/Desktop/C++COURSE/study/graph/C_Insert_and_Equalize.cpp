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
    vl a;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        a.pb(x);
    }
    if(n==1){
        cout<<"1\n";
        return;
    }
st(a);
vl diff_a;

for(int i = n-1;i>0;i--){
    diff_a.pb(a[i]-a[i-1]);
}

st(diff_a);
ll a_gcd = diff_a[0];
for(int i = 1;i<diff_a.size();i++){
    a_gcd = __gcd(a_gcd,diff_a[i]);
    if(a_gcd==1){
        a_gcd = 1;
        break;
    }
}
ll ans = 0;
for(int i=0;i<n-1;i++){
    ans+= (a[n-1]-a[i])/a_gcd;
}
// ll nxt = a[0]-a_gcd;
ll toadd=n;
int j=1;
for(int i=n-1;i>0;i--){
    if(a[i]-a_gcd!=a[i-1]){
        // nxt = a[i]-a_gcd;
        toadd=j;
        break;
    } 
    j++;
}


cout<<ans+toadd<<"\n";
return;
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


