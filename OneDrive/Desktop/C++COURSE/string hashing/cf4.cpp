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
    ll n,q;
    
    cin>>n>>q;
    int k=q;
    string s;
    cin>>s;
    vl ans;
    int mx=1;
    int cur=1;
  for(int i=1;i<n;i++){
      if(s[i]==s[i-1]){
          cur++;
            mx=max(mx,cur); 
      }
      else{
          mx=max(mx,cur);
          cur=1;
      }
  }
  ans.push_back(mx);
  int ls=0;
  for(int i=n-1;i>=0;i--){
      if(s[i]==s[n-1])ls++;
      else break;
  }
  
  
// cout<<mx;  
  string nx;
  nx.push_back(s[n-1]);
while(q--){
    char x;
    cin>>x;
    nx.push_back(x);
}
int to=1;
// ls=0;
// for(int i=0;i<k;i++){
//     if(s[n-1]==nx[i]){
//         ls++;
//     }
//     else {to = i; break; }
// }
// mx = max(mx,ls);
// nx.push_back('#');
// mx=1;
cur=ls;
// ans.push_back(max(1,ls));
for(int i=1;i<=k;i++){
      if(nx[i]==nx[i-1]){
          cur++;
              mx=max(mx,cur); 
            //   ans.push_back(mx);
              
      }
      else{
        //   mx=max(mx,cur);
        //   ans.push_back(mx);
          cur=1;
      }
      ans.push_back(mx);
     
  }
for(auto &it:ans)cout<<it<<" ";
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

