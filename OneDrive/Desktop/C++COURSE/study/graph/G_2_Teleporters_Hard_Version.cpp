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
#define int ll
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

void solve() {
    ll n , k;
    cin>>n>>k;
    vl a ,b;
    ll nn=n;
    for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        // x+=i;

        a.push_back((ll)x+i);
        b.push_back((ll)x+nn);
        // cout<<a[i-1]<<" "<<b[i-1]<<"\n";
        nn--;
    }
    // cout<<"\n";
    st(a);
    for(auto x:b){
        a.pb(x);
    }
    
    sort(a.begin()+1,a.end());
    // st(b);
    int ans =0;
    int j=0;
    for(auto x:a){cout<<x<<" ";}
    cout<<"\n";
    for(int i = 0;i<a.size();){
        if(a[i]<=k){
            ans++;
            k-=a[i];
            i++;
        }
        // else if(a[i]<=b[j]&&a[i]<=k){
        //      ans++;
        //     k-=a[i];
        //     i++;
        // }
        // else if(a[i]>=b[j]&&b[j]<=k){
        //     ans++;
        //     k-=b[j];
        //     j++;
        // }
        else {
            cout<<ans<<"\n";
            return;
        }
        if(i==a.size()){
            cout<<ans<<"\n";
            return;
        }
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
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.


