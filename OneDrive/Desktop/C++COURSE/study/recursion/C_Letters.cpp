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
# define minA(v) *min_element(v)
# define maxA(v) *max_element(v)
# define st(v) sort(v.begin(),v.end())
# define f(n) for(int i=0;i<n;i++)
# define in int t; cin>>t; while(t--)

auto solve(){

 ll n, m;
 cin>>n>>m;
 vl a(n) ,b(m);
 vl sum;
 ll ss=0;
 f(n){
    cin>>a[i];
    ss+=(ll)a[i];
    sum.pb(ss);
 }
 f(m){
    cin>>b[i];
 }
 
 f(m){
    int low = 0 , high = n-1;
    int ans = 0;
 while(high >= low){
    int mid = high - ((high-low)>>2);
    if(b[i]<=sum[mid]){
        ans=mid;
        high=mid-1;
    }
    else{
        low=mid+1;
    }
 }
 ll xx=b[i]-sum[ans-1];
 if(ans<=0){
    xx=b[i];
 }
 cout<<ans+1<<" "<<xx<<"\n";
 }
}


int main(){
	   fastio    
    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    //in{

	solve();



//}
return 0;
}
//This is krishna.


