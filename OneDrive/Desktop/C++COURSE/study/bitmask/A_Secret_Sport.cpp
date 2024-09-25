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
string s;
cin>>s;
vl a,b;
s.push_back('z');
int cc=0;
int cb=0;
bool t=false,m=false;

 for(auto x:s){
    if(x=='A'){
        cc++;
        if(t)
        b.pb(cb);
        t=false;
        m=true;
        cb=0;
    }
    if(x=='B'){
        if(m)
        a.pb(cc);
        m=false;
        t=true;
        cc=0;
        cb++;
    }
    else{
        if(t)
        b.pb(cb);
        if(m)
        a.pb(cc);

    }
 }
 int win=0;
 if(a.size()>b.size()) cout<<"A\n";
 else if(a.size()<b.size()) cout<<"B\n";
else {
int caa=0,ccb=0;
for(int i=0;i<a.size();i++){
    if(a[i]>b[i]) caa++;
    else if(a[i]<b[i])ccb++;
}
if(caa>ccb)cout<<"A\n";
else if(ccb>caa) cout<<"B\n";
else cout<<"?\n";

}

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


