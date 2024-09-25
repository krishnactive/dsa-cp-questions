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
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

void solve() {
    int q;
    cin>>q;
    map<char,int>mp1,mp2;
    char c='a';
    mp1[c]++;mp2[c]++;
    int k1=0,k2=0;
    while(q--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(n==1){
            for(auto &x:s){
                mp1[x]+=k;
                k1+=k;
            }
        }
        else {
            for(auto &x:s){
                mp2[x]+=k;
                k2+=k;
            }
        }
        if(mp2.size()>=2) cout<<"YES\n";
        else if(mp1.size()==1&&mp2.size()==1&&k2>k1)cout<<"YES\n";
        else cout<<"NO\n";
    }
  

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
