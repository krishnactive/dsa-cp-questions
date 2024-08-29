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
# define mp unordered_map
# define uset unordered_set
# define mset multiset
# define minA(v) *min_element(v.begin(),v.end())
# define maxA(v) *max_element(v.begin(),v.end())
# define st(v) sort(v.begin(),v.end())
# define fin for(int i=0;i<n;i++)
# define in int t; cin>>t; while(t--)

int msb(int x){
    for(int i=63;i>=0;i--){
        if((x>>i)&(1)){
            return i;
          
        }
    }
    return 0;
}


auto solve(){
    int n;
    cin>>n;
    ump<int , int >to;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        to[msb(x)]++;
    }
    ll ans=0;
    
for(auto x:to){
   
    ans+=(ll)x.second*(x.second-1)/2;

}
cout<<ans<<"\n";
}


int main(){
	   fastio    
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


