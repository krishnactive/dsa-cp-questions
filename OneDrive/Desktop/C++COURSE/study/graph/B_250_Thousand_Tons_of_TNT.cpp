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
    ll n;
cin>>n;
vl a;
// ll sum =0;
// vl pre;
// ll su=0;
fi(n){
    ll x;
    cin>>x;
    // sum+=x;
    // pre.pb(sum);
    a.push_back(x);
}
// int k=1;
ll ans=0;
// vl an;

vl ff;
for(int i=1;i<=n/2;i++){
    if(n%i==0) ff.pb(i);
}
// ll ans = -1;
for(ll x:ff){
    vl temp;
    for(int i=0;i<n;i+=x){
        ll sum=0;
        for(int j=i;j<x+i;j++){
            sum+=a[j];
        }
        temp.pb(sum);
    }
    ans = max(ans,maxA(temp)-minA(temp));
    // temp.empty();
}
cout<<ans<<"\n";

// while(true){
//     if(n%k==0){
//     for(auto k:ff){
//     ll cur = 0;
//     cur=pre[k-1];
    
//     for(int i = 0;i<n-k;i+=k){

//         // ans = max(ans ,cur);
//         temp.pb(cur);
//         cur-=a[i];
//         if(i+k>=n)break;
//         cur+=a[i+k];
//     }
//     // ans = maxA(temp)-minA(temp);
//     an.pb(maxA(temp)-minA(temp));
//     temp.empty();
    
//   }  // if(k==n) break;
// // }
// // k++;
// if(k>=n) break;
// }
// cout<<maxA(an)<<"\n";





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


