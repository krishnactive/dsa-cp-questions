#include<bits/stdc++.h>
using namespace std;

# define fastio      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
# define ll long long
# define lld long double
# define pb push_back 
# define vi vector<int>
# define vc vector<char>
# define vl vector<ll>
# define ump unordered_map
# define uset unordered_set
# define mset multiset
# define minA(v) *min_element(v.begin(),v.end())
# define maxA(v) *max_element(v.begin(),v.end())
# define st(v) sort(v.begin(),v.end())
# define fi(i,n) for(int i=0;i<n;i++)
# define in int t; cin>>t; while(t--)
# define mod 1000000007
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}




void solve(){
ll n;
cin>>n;
vl v;
vi cnt(60);
ll ans = 0;
fi(i,n){
    ll x;
    cin>>x;
    v.pb(x);
    fi(b,60){
        if((x>>b)&1){
            ++cnt[b];
        }
    }
}
fi(j,n){
    ll c = v[j];

    ll aval = 0, oval = 0;
    fi(b,60){
        ll p2 = (1ll << b) % mod ;

        if((c>>b) & 1){
            aval = (aval + p2*cnt[b])%mod;
            oval = (oval + p2*n)%mod;
        }
        else{
            oval = (oval + p2*cnt[b])%mod;
        }
    }
    ans = (ans + aval* oval) %mod;

}
cout<<ans<<"\n";
}


int main(){
	   fastio    
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout<<setprecision(15);
    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    in{

	solve();



}
return 0;
}
//This is krishna.


