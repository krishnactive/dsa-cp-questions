#include<bits/stdc++.h>
using namespace std;

# define fastio      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
# define ll long long
# define lld long double
# define pb push_back 
# define vi vector<int>
# define vc vector<char>
# define vl vector<ll>
# define ump unordered_map
# define uset unordered_set
# define mset multiset
# define minA(v) *min_element(v.begin(),v.end())
# define maxA(v) *max_element(v.begin(),v.end())
# define st(v) sort(v.begin(),v.end())
# define fi(n) for(int i=0;i<n;i++)
# define in int t; cin>>t; while(t--)
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}



void solve(){
int n;
cin>>n;
vi v(1001,-1);
int first = -1;
int second = -1;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v[x]=i+1;
if(x==1){
    second=first;
    first = i+1;
}}
int ans=-1;
if(first!=1) ans = max(ans,first +first);
for(int i = 0;i<=1000;i++){
    for(int j=1+i;j<=1000;j++){
        if(__gcd(i,j)==1){
           if(v[i]!=-1&&v[j]!=-1)
            ans = max(v[i]+v[j],ans);
        }
    }
}
cout<<ans<<endl;



}


signed main(){
	   fastio    
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout<<setprecision(15);
    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    in{

	solve();



}
return 0;
}
//This is krishna.


