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
    ll n;
    cin>>n;
    vl b;
    fin(b,n);
    vl neg , pos, a;
    for(auto x:b){
        if(x<0)neg.pb(x);
        else if(x>0)pos.pb(x);
        else if(a.size()<2) a.push_back(x);
    }
    if(pos.size()>2||neg.size()>2){
        cout<<"NO\n";
        return;
    }
    for(auto x:pos) a.push_back(x);
    for(auto x:neg) a.push_back(x);
    n=a.size();
// if(a.size()>2){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                ll sum = a[i]+a[j]+a[k];
                bool pass = false;
                for(int f=0;f<n;f++){
                    if(sum==a[f]){
                        pass = true;
                    }
                }
                if(!pass){
                    cout<<"NO\n";
                    return;
                }
            }
        }
    }
// }
    cout<<"YES\n";
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
