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
int n,k;
cin>>n>>k;
string s;
cin>>s;
int cb=0;
for(auto x:s){
    if(x=='B'){
        cb++;
    }
}
if(k==cb) cout<<"0\n";
else if( cb<k){
cout<<"1\n";
     int re=k-cb;
    
    int cv=0;
    for(int i = 0;i<n;i++){
        if(s[i]=='A') cv++;
        if(cv==k-cb){
            cout<<i+1<<" B\n";
            break;
        }
    }



  
}
else {
    
  cout<<"1\n";
    int cv=0;
    for(int i = 0;i<n;i++){
        if(s[i]=='B') cv++;
        if(cv==cb-k){
            cout<<i+1<<" A\n";
            break;
        }
    }


    
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


