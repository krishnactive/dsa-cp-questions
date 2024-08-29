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
#define min fmin
#define max fmax
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

void solve() {
    ll n;
    // cin>>n;
    string s;
    n= s.size();
    cin>>s;
    auto ok = [&](int mid)->bool{
        string ch = s.substr(0,mid);
        string ch2 = s.substr(mid,mid);
        string ch3 = s.substr(1,mid);
        cout<<ch<<" "<<ch3<<"\n";
        for(int i = 1;i<n-mid*2;i++){
            if(ch==ch2){
                return true;
            }
            else{
                ch = s.substr(i,mid);
                ch2 = s.substr(i+mid,mid);
            }
        }
        return false;
    };
cout<<ok(2)<<"\n";


    int lo = 1;
    int hi = n/2;
    int ans = 0;
    while(lo<=hi){
        int mid = hi-(hi-lo)/2;
        if(ok(mid)){
            ans=mid*2;
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    cout<<ans<<"\n";
  

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
