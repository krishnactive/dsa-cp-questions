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
ll n;
cin>>n;
vl a(n), b(n);
fin{
    cin>>a[i];
}
fin{
    cin>>b[i];
}
vl ans(n);
ll nn=n;
ll st =0;
for(int j=0;j<n;j++){
    int jj=j;
for(int i = 0 ; jj<n&&i<nn-j;i++,jj++){
    // if(a[i]>0){
        ll mi = min(a[i],b[jj]);
        ans[jj]+=(ll)mi;
        
        a[i]-=mi;
    // }
}
}
fin{
    cout<<ans[i]<<" ";
}
cout<<"\n";
    



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


