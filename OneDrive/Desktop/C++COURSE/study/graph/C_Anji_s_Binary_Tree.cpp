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
const int N = 3*(1e5)+10;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}
vector<int> g[300005];
    // vector<char> val;
    int ans = 0 ;
    int fans = 1e8;
    int tr = 0;
void dfs(int vertex , string &s , int par = -1 ){
    if(g[vertex][0]==0&&g[vertex][1]==0){
        // cout<<"kk\n";
        fans=min(fans ,ans);
    }
    for(int i=0;i<2;i++){
        if(g[vertex][i]==0)continue;
        if(i==0){
            if(s[vertex]!='L') ans++;
            dfs(g[vertex][0],s,vertex);
            if(s[vertex]!='L') ans--;
        }
        else {
            if(s[vertex]!='R')ans++;
            dfs(g[vertex][1],s,vertex);
            if(s[vertex]!='R')ans--;

        }
    }
   
}



void solve() {
  
    ll n;
    cin>>n;
    string s;
    cin>>s;
    s='#'+s;
    // for(int i=1;i<=n;i++){
    //     val.push_back(s[i-1]);
    // }
    for(int i=1;i<=n;i++){
        int x ,y;
        cin>>x>>y;
        g[i].pb(x); 
        g[i].pb(y);
    }
    

dfs(1,s);

    // for(int i=1;i<=n;i++){
    //     // cout<<val[i]<<i<<" ";
    //     for(auto xx:g[i]){
    //         cout<<val[xx]<<xx<<" ";
    //     }
    //     cout<<"\n";
    // }
    cout<<fans<<"\n";
 for (int i = 1; i <=n; ++i) {
        g[i].clear();
    }
    // val.clear();
    ans=0;
    fans=1e8;

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


