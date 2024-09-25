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
uset<int> a;
vi b;

fi(n){
    int x;
    cin>>x;
    // a.insert(x);
    b.pb(x);
}
st(b);
// int si=a.size();
// if(si==2){
//     if(n>=3);
// }
int c1=0;
int c2=0;
for(auto x:b){
    if(x==b[0]){
        c1++;
    }
    else if(x==b[n-1]){
        c2++;
    }
}

if(c1+c2==n){
    if(abs(c1-c2)==1||c1-c2==0||c1==n||c2==n){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}
else{
    cout<<"No\n";
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


