// #include<bits/stdc++.h>
// using namespace std;
// # define ll long long
// # define pb push_back 
// # define in int t; cin>>t; while(t--)

// int main(){
//     in{
// ll n, m;
// cin>>n>>m;
// vector<ll>slope;
// vector<vector<ll>>para(m);

// for(int i=0; i<n; i++){
//     ll x;
//     cin>>x;
//     slope.pb(x);
// }
// for(int i=0;i<m;i++){
//    for(int j=0;j<3;j++){
//    ll xx;
//    cin>>xx;
//     para[i].pb(xx);
//     }
// }
// sort(slope.begin(),slope.end());
// bool pass=true;
// for(int i=0;i<m;i++){
//     ll a=para[i][1];
//     ll b=para[i][1];
//     int j=lower_bound(slope.begin(),slope.end(),a)-slope.begin();
//     if(j<n){
//          if((ll)((para[i][1]-slope[j])*(para[i][1]-slope[j]))<(ll)(4*(ll)(para[i][2])*para[i][0])){
//             cout<<"YES\n";
//             cout<<slope[j]<<'\n';
        
//             continue;
//         }}
//         if(j>0){
// if((ll)((para[i][1]-slope[j])*(para[i][1]-slope[j]))<(ll)(4*(ll)(para[i][2])*para[i][0])){
//             cout<<"YES\n";
//             cout<<slope[j-1]<<'\n';
           
//             continue;
//         }
//         }
//         cout<<"NO\n";
        
//     }
//     // if(pass){
//     //         cout<<"NO\n";
//     // }
//     // pass=true;

// // cout<<"NO\n";

// // end:
// // cout<<"";
// }
// return 0;
// }
// //This is krishna.
#include<bits/stdc++.h>
using namespace std;
//=========================
//Macros:::
#define endl "\n"
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define w while
#define ll long long
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define sl2(x,y) scanf("%lld %lld",&x,&y)
#define sl3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define sl4(a,b,c,d) scanf("%lld %lld %lld %lld",&a,&b,&c,&d)
#define sl5(a,b,c,d,e) scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e)
#define ss(s) scanf("%s",s)
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define pl2(a,b) printf("%lld %lld",a,b)
#define pl3(a,b,c) printf("%lld %lld %lld",a,b,c)
#define pl4(a,b,c,d) printf("%lld %lld %lld %lld",a,b,c,d);
#define ps(s) printf("%s\n",s)
#define re(a) cin>>a
#define re2(a,b) cin>>a>>b
#define re3(a,b,c) cin>>a>>b>>c
#define re4(a,b,c,d) cin>>a>>b>>c>>d
#define re5(a,b,c,d,e) cin>>a>>b>>c>>d>>e
#define re6(a,b,c,d,e,f) cin>>a>>b>>c>>d>>e>>f
#define pr(a) cout<<a<<endl
#define pr2(a,b) cout<<a<<" "<<b<<endl;
#define pr3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define pr4(a,b,c,d) cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl
#define pr5(a,b,c,d,e) cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl
#define pr6(a,b,c,d,e,f) cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "e<<" "<<f<<endl
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define rsortall(x) sort(rall(x))
#define tr(x, a) for(auto x = a.begin(); x != a.end(); x++)
#define PI 3.1415926535897932384626
#define pinff LLONG_MAX
#define ninff LLONG_MIN
#define sz(a) a.size()
typedef pair<int, int>  pii;
typedef pair<ll, ll>  pl;
typedef vector<int>   vi;
typedef vector<ll>    vl;
typedef vector<pii>   vpii;
typedef vector<pl>    vpl;
typedef vector<vi>    vvi;
typedef vector<vl>    vvl;
//===========================
//To save my submission from hacks::::
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}
//===========================
//Functions declaration::::
ll mpow(ll base, ll exp); 
void ipgraph(ll m1);
void dfs(ll u);
//===========================
//Useful constants::::
const int mod = 1000000007;
const int N = 3e5, M = N;
//=======================
//Visited array for DFS
bool vis[N];
//===========================
//DP ARRAY::::
ll dp[N];
//=======================
//Graph Adjacency List (Array of Vectors)::::
//For weighted edges change vl to vector<pair<ll,ll>>
vl g[N];
//vector<pair<ll,ll>> g[N];
//=======================
//DSU
ll par[N];
ll SIZE[N];
void make(ll v){
  par[v]=v;
  SIZE[v]=1;
}
ll find(ll v){
  if(par[v]==v) return v;
  return par[v]=find(par[v]);
}

void Union(ll u,ll v){
u=find(u);
v=find(v);
  if(u!=v){ 
    if(SIZE[u]<SIZE[v]) swap(u,v);
    par[v]=u;
    SIZE[u]+=SIZE[v];
  }
}
//============================
//Solve:::::
  bool f1=0,f2=0,f3=0,f4=0;
void solve(){
//========================
  ll sum=0,ans=0,val,cur,last,n;
  string s;
  map<ll,ll> m;
  set<ll> st;
// For traversing loops::::
    ll i,j;
//========================
//Solve:::::
  ll m1;
  re2(n,m1);
  vl k(n);
  fo(i,n) re(k[i]);
  vl a(m1),b(m1),c(m1);
  fo(i,m1){
    re3(a[i],b[i],c[i]);
  }
  sortall(k);
  fo(i,m1){
    ll x=lower_bound(k.begin(),k.end(),b[i])-k.begin();
    ll val;
    if(x<n){
      val=(b[i]-k[x])*(b[i]-k[x]);
    val-=4*a[i]*c[i];
    if(val<0) {
      pr("YES");
      pr(k[x]);
      continue;
    }
    }
    if(x>0){
      val=(b[i]-k[x-1])*(b[i]-k[x-1]);
    val-=4*a[i]*c[i];
    if(val<0) {
      pr("YES");
      pr(k[x-1]);
      continue;
    }
    }
    pr("NO");
  }
}
//=========================
//Change cin>>t to t=1 if only one test case is given::::
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout<<setprecision(15);
    int tt; 
    tt=1;
    cin>>tt;
    w(tt--) {
      solve();
    }
    return 0;
}
//===================
//Binary Exponentiation  
ll mpow(ll base, ll exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}
//====================
//Graph input::::::
void ipgraph(ll m1){
  ll u, v;
  while(m1--){
    cin>>u>>v;
    g[u].pb(v);
    g[v].pb(u);
  }
}
//====================
//Depth First Search

void dfs(ll u){
  pr(u);
  vis[u]=true;
  for(auto v:g[u]){
    if (vis[v]) continue;
    dfs(v);
  }
}
//=======================

