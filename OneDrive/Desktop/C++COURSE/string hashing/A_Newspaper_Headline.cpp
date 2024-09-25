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
    string s , t;
    cin>>s>>t;
    ll l1=s.size();
    ll l2 = t.size();

    set<int> fre[26];

    for(int i=0;i<l1;i++){
        fre[s[i]-'a'].insert(i);
    }
    ll ans=1;
    ll ilast=-1;

    for(int i=0;i<l2;i++){
        int tem=t[i]-'a';
        if(fre[tem].size()==0){
            cout<<"-1\n";
            return;
        }
        auto it = fre[tem].upper_bound(ilast);
        if(it==fre[tem].end()){
            ans++;
            ilast=*fre[tem].begin();
        }
        else{
            ilast=*it;
        }

    }
  cout<<ans<<"\n";

}

int main() {
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
