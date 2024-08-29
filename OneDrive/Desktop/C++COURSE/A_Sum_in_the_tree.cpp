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
#define int ll
#define min fmin
#define max fmax
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

vector<int> childern[100005];
int s[100005];
int a[100005];
int ans = 0;
void dfs(int cur, int par){
    int s_parent = 0;
    if(par!=-1){
        s_parent = s[par];
    }
    if(s[cur]==-1){
        int minv = 1e9;
        for(auto child:childern[cur]){
            minv = min(minv, s[child]);
        }
        if(childern[cur].size()==0)minv = s_parent;
        s[cur] = minv ;  
    }
    a[cur] = s[cur] - s_parent;
    ans+=a[cur];

    for(auto child:childern[cur]){
            dfs(child,cur);
    }
}

void solve() {
    ll n;
    cin>>n;

    for(int i=0;i<n-1;i++){
        int p;  //p is parent of (i+1)  
        cin>>p;
        p--;
        childern[p].push_back(i+1);
    }
    for(int i=0;i<n;i++)cin>>s[i];

    dfs(0, -1); 

    bool pos = 1;

    for(int i =0 ;i<n;i++){
        if(s[i]<0||a[i]<0){
            pos = 0;
            break;
        }
    }
    if(!pos)cout<<-1<<"\n";
    else{
        cout<<ans<<"\n";
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
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
