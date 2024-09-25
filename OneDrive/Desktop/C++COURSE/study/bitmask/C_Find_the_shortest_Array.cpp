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
# define in int t; cin>>t; while(t--)

void binary(int a){
    for(int i=63;i>=0;i--){
   
        cout<<((a>>i)&1);
    }

}

int xorOfNumbersUpToN(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}


int  check(ll a,ll b){
    ll x=0;
    for(int i=0;i<a;i++){
        x^=(ll)i;
    }
return x==b;

}




auto solve(){
    ll a,b;
    cin>>a>>b;
ll ch = xorOfNumbersUpToN(a-1);
if (ch==0||ch==a){
    cout<<a+2;
}

else if() cout<<a+1;

else cout<<a;
cout<<'\n';
}


int main(){
  
 
    in{

	solve();



}
return 0;
}
//This is krishna.


