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
# define f(n) for(int i=0;i<n;i++)
# define f(i,n) for(int i=0;i<n;i++)
# define f(i,a,n) for(int i=a;i<n;i++)
# define in int t; cin>>t; while(t--)
//use MAX_INT......
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}



void solve(){

int n,k;
cin>>n;
cin>>k;
vl v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.pb(x);
}
sort(v.begin(),v.end());
int l=n/k;
int re=l-2;
ll mi = 0;
for(int i=1;i<n-(l-2)*k;i+=2){
    mi+=v[i];
}
int ma = 0;
for(int i=n-2;i>=(l-2)*k;i-=2){
    ma+=v[i];
}

cout<<mi<<" "<<ma<<"\n";

}


int main(){
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


