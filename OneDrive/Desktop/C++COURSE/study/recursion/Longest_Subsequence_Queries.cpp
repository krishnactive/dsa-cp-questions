#include<iostream>
#include<vector>
#include<algorithm>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;

int main(){
    in{
ll n,m;
cin>>n>>m;
vector<ll>inn;
ll sum=0;
for(int i=0;i<n;i++){
    ll xx;
    cin>>xx;
    inn.pb(xx);
    //cin >> inn[i];
}
vector<ll>pre;
//int cc=0;
sort(inn.begin(),inn.end());
for(auto x:inn){
    sum+=x;
    pre.pb(sum);
}
while(m--){
    ll x;
    ll ans=0;
    cin>>x;
    int lo = 0;
    int hi = n-1;
   
    while(hi>=lo){
        int mid = lo-(lo-hi)/2;
        if(pre[mid]<x){
            lo=mid+1;
            ans = mid + 1;
        }
        else{
            hi=mid-1;
        }
    }
    cout<<ans<<"\n";
}
}

return 0;
}
//This is krishna.