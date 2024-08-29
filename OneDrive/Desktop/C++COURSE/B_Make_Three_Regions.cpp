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
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define int long long
#define min fmin
#define max fmax
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}



void solve() {
     int n;
        cin >> n;
        vector<string> grid(2);
        cin >> grid[0] >> grid[1];
        
     int ans = 0;
    bool y = false;  

    for (int i = 0; i < n; i++) {
        if(grid[1][i]=='.'&&grid[0][i]=='.'){
            if((i-1>=0&&grid[0][i-1]=='.')&&(i+1<n&&grid[0][i+1]=='.')){
                if((i-1>0&&grid[1][i-1]=='x')&&((i+1<n)&&grid[1][i+1]=='x')){
                    ans++;
                }
            }
             if((i-1>=0&&grid[1][i-1]=='.')&&(i+1<n&&grid[1][i+1]=='.')){
                if((i-1>=0&&grid[0][i-1]=='x')&&((i+1<n)&&grid[0][i+1]=='x')){
                    ans++;
                }
            }
        }
       
    }
    cout << ans << "\n";
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