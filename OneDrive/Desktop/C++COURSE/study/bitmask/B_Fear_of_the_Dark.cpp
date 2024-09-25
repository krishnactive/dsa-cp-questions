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
double px,py;
double ax,ay;
double bx,by;
cin>>px>>py>>ax>>ay>>bx>>by;

double ao = ax*ax+ay*ay;
double bo = bx*bx+by*by;
double ap = (ax-px)*(ax-px)+(ay-py)*(ay-py);
double bp = (bx-px)*(bx-px)+(by-py)*(by-py);
double ab = ((ax-bx)*(ax-bx)+(ay-by)*(ay-by))/4;

double pm = min(ap,bp);
double om = min(ao, bo);

if(pm==ap&&om==ao){
  cout<<sqrt(max(ap,ao))<<"\n";
}
else if(pm==bp&&om==bo){
  cout<<sqrt(max(bp,bo))<<"\n";
}
else{
  cout<<sqrt(max(ab,(max(pm,om))))<<"\n";
}


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


