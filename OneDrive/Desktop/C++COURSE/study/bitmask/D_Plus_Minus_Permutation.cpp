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
# define fin for(int i=0;i<n;i++)
# define in ll t; cin>>t; while(t--)
// int gcd(int a, int b) {
//     if (b == 0) {
//         return a;
//     }
//     return gcd(b, a % b);
// }


int solve(){
ll n,a,b;
cin>>n>>a>>b;

 ll lcm=n/((ll)(a*b)/__gcd(a,b));
ll da=0,db=0;
// ll cl=0;
// cl=n/lcm;

da=n/a-lcm;
db=n/b-lcm;
ll ans=0;
// ll chh=0;
// // ll ms=db-cl;
// //if(b%a!=0||a%b!=0){

// for(ll i = n; ;i--){
//     if(chh>=da) break;
//     ans+=(ll)i;
//     chh++;
    
// }
// chh=0;
// for(ll i = 1; ;i++){
//     if(chh>=db) break;
//     ans-=i;
//     chh++;
    
// }

//}
// else{
//     chh=0;
// for(ll i = 1; ;i++){
//     if(chh>=db) break;
//     ans-=i;
//     chh++;
    
// }
// }
// ll ans1= (ll) da*((ll)n*2-(da-1))/2;

ll ans1= ((n*(n+1))/2)-(((n-da)*(n-da+1))/2);

ll ans2= (db*(db+1))/2;
cout<<ans1-ans2<<"\n";




//  chh=0;
// for(int i = n-ms; ;i--){
//     ans-=i;
//     chh++;
//     if(chh>=cl) break;
// }
//cout<<ans<<"\n";


}


int main(){
	   fastio    
    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout<<setprecision(15);
    in{

	solve();



}
return 0;
}
//This is krishna.


