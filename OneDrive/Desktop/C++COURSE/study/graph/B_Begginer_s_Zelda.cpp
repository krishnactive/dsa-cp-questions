#include<bits/stdc++.h>
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
#define f(i, n) for(int i=0; i<n; i++)
#define fr(i, a, n) for(int i=a; i<n; i++)
#define in int t; cin >> t; while(t--)
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
    uniform_int_distribution<int> uid(0, lim-1);
    return uid(rang);
}

vector<vector<int>> adj;

void solve() {
    int n;
    cin >> n;

    adj.resize(n + 1);

    f(i, n - 1) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

   int ans = 0;
   for(int i=1;i<=n;i++){
    if(adj[i].size()==1){
        ans++;
    }
   }
   cout<<ceil((double)ans/2)<<"\n";
    adj.clear();

}

int main() {
    fastio
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout << setprecision(15);
    
    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    
    in {
        solve();
    }
    
    return 0;
}
//This is krishna.