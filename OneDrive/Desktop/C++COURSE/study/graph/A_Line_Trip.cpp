#include<bits/stdc++.h>
using namespace std;

# define fastio      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
# define ll long long
# define lld long double
# define pb push_back 
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
int n , x;
cin>>n>>x;

vector<int> a;
a.push_back(0);
for(int i =0;i<n;i++){
    int c;
    cin>>c;
    a.pb(c);
}
n++;
sort(a.begin(),a.end());
int ans=0;
for(int i =1;i<n;i++){
    ans=max(ans,a[i]-a[i-1]);
}
ans = max(ans,max(2*((x-a[n-1])),2*(a[0])));
// if(n==1)
// {
//     +
// }
// else
cout<<ans<<"\n";

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


