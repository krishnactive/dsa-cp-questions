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
    int i = n-2, j =n-1;
    int mx = 0;
    while(true){
        bool pass = false;
        if(s[i]==s[j]){
            mx = i;
            int vii = i , vj = j;
            
            while(true){
                i--;
                j--;
                if(s[i]!=s[j]){
                    mx=0;
                    j = vj;
                    break;   
                }
                if(i==0){
                    pass = true;
                    break;
                }
            }
            if(pass)break;
        }
        if(pass)break;
        
        i--;
    }
    // cout<<mx;
    // int lo = 
    deque<char> ss;
    for(int i = 1;i<=mx;i++){
        ss.push_back(s[i]);
    }
    while(mx--){
        for(int i = 1;i<n-1;i++){
            
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
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
