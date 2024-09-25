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
vl a(30,0);
void solve(ll &xo) {
	ll x,y;
    cin>>x>>y;
    
    if(x==1){
        a[y]++;
    }
    else{
        bool pass = true;
        for(ll i=29;i>=0;i--){
            if(y >= a[i]*(1<<i)) y-=a[i]*(1<<i);
            else{
                ll temp = y/(1<<i);
                y-=temp*(1<<i);
            }
            if(y==0){
                pass = false;
                cout<<"YES\n";
                break;
            }
        }
        if(pass)cout<<"NO\n";
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
    
    int t;
    cin >> t;
    
    ll xo = 0;
    while (t--) {
        
        solve(xo);
    }
a.clear();
    return 0;
}
// This is krishna.


