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
    cin>>n;
    vl a;
    fin(a,n);
    vl pre;
    set<int>fre;
    
    for(int i=0;i<n;i++){
        fre.insert(a[i]);
        pre.push_back(fre.size());
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        // if(pre[r-1]>pre[l-1]||a[r-1]!=a[l-1]){
            int i = l;
            int j = -1;
            int lo = l-1;
            int hi = r-1;
            bool pass =false;
            while(lo<hi){

                int mid = hi-(hi-lo)/2;
                if(pre[mid]-pre[l-1]+1>1||a[mid]!=a[l-1]){
                    cout<<l<<" "<<mid+1<<"\n";
                    pass=true;
                    break;
                    j=mid;
                    
                    hi = mid-1;
                }
                else if(a[mid]!=a[r-1]){
                    pass=true;
                    cout<<mid+1<<" "<<r<<"\n";
                    break;
                }
                else{
                    lo = mid+1;
                }
            }
            // if(j!=-1)
            // cout<<i<<" "<<j+1<<"\n";
        // }
        // else{
            if(!pass)
            cout<<"-1 -1\n";
        // }
    }
  
cout<<"\n";
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
