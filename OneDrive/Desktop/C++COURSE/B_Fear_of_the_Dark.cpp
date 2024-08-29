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
lld px,py;
lld ax,ay;
lld bx,by;
cin>>px>>py>>ax>>ay>>bx>>by;
lld ao = (lld)sqrt((ax*ax+ax*ax));
lld bo = (lld)sqrt(bx*bx+by*by);
lld ap = (lld)sqrt((px-ax)*(px-ax)+(py-ay)*(py-ay));
lld bp = (lld)sqrt((px-bx)*(px-bx)+(py-by)*(py-by));
lld oo = (lld)min(ao,bo);
lld pp = (lld)min(ap,bp);
lld ab = (lld)sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by))/2;

lld ans = (lld)max(oo,ab);
ans = (lld)max(ans, pp);
cout<<ans<<"\n";
// if((oo==ao&&pp==ap)){
//     cout<<max(oo,pp)<<"\n";

// }
// else if((oo==bo&&pp==bp)){
//     cout<<max(oo,pp)<<"\n";
// }

// else{
//    cout<<ans<<"\n";
// }


}


int main(){
	   fastio    
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout<<setprecision(11);
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


