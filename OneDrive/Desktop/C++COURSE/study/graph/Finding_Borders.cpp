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



ll bin_power_mod(ll base, ll power , ll m){
	base%=m;
	ll res = 1;
	while(power>0){
		if(power&1){
			res = res * base % m;
		}
		base = base * base % m;
		power >>= 1;	
	}
	return res;
}
long long modulo_inverse(long long base, long long mod){
    return bin_power_mod(base , mod-2, mod);
}

void solve() {
    string s;
    cin>>s;
    ll n = s.size();

    ll p1 = 31 ; ll mod1 = 1e9+7;
    ll p2 = 37 ; ll mod2 = 1e9+9;
    vector<int> hash1(n,0), hash2(n,0);
    hash1[0] = hash2[0] = s[0]-'a'+1;
    for(int i=1;i<n;i++){
        hash1[i] = (hash1[i-1]+ (s[i]-'a'+1)*bin_power_mod(p1,i,mod1))%mod1;
        hash2[i] = (hash2[i-1]+ (s[i]-'a'+1)*bin_power_mod(p2,i,mod2))%mod2;
    }
 
    for(int i=1;i<n;i++){
        ll hash1prefix = hash1[i-1];
        ll hash2prefix = hash2[i-1];

        ll hash1suffix = ((hash1[n-1]- hash1[n-1-i]+mod1)*modulo_inverse(bin_power_mod(p1,n-i,mod1),mod1))%mod1;
        ll hash2suffix = ((hash2[n-1]- hash2[n-1-i]+mod2)*modulo_inverse(bin_power_mod(p2,n-i,mod2),mod2))%mod2;
        if(hash1prefix==hash1suffix&&hash2prefix==hash2suffix){
            cout<< i<<" ";
        }
    }

}

int main() {
    fastio
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout << setprecision(15);

    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    
    int t=1;

    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
