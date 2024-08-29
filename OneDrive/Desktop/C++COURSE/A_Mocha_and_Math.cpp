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

auto solve(){
int n;
cin>>n;
vector<int>ar;

fin{
    int x;
    cin>>x;

    ar.pb(x);
}
// vi arr;
int ans=ar[0];
for(int i=1;i<n;i++) ans=(ans&ar[i]);
// n=arr.size();
// st(arr);
// //cout<<min(arr[0],(arr[0]&arr[n-1]))<<"\n";
// cout<<(arr[0]&arr[n-1])<<"\n";
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


