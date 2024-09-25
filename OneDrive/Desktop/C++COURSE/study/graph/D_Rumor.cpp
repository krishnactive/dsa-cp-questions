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
#define int long long
const int N = 1e5+10;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}
vector<ll>g[N];
vector<ll> vis(N, 1); 
vl v(N,0);

ll dfs(ll vertex , ll mi ){
    vis[vertex-1] = 2;
    for(int child:g[vertex]){
        if(vis[child-1]) continue;
        mi=min(mi,dfs(child , v[child-1] ));
    }
return mi;
}

void solve() {
	ll a,b;
    cin>>a>>b;
    
    ll sum = 0;
    
    for(int i=0;i<a;i++){
        ll x;
        cin>>x;
        v[i]=x;
        // sum += x;
    }
    for(int i=0;i<b;i++){
        ll x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
        vis[x-1] = 0;
        vis[y-1]=0;

    }
    for(int i=1;i<=N;i++){
        if(vis[i-1]) continue;  
        sum+=dfs(i , v[i-1]);
    }
    for(int i =0;i<=N;i++){
        if(vis[i]!=2) sum+=v[i];
    }
cout<<sum<<"\n";

}

signed  main() {
    fastio
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout << setprecision(15);

    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    
    int t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
// This is krishna.


