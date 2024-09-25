#include<iostream>
#include<vector>
#include<algorithm>
# define ll long long
# define pb push_back 

# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;



int main(){
    
        ll n;
        cin>>n;
vector<ll>v ;
vector<ll >su;
ll cc=0;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.pb(x);
}
sort(v.begin(),v.end());
for(int i=1;i<=n;i++){
    cc+=v[i-1];
    su.pb(cc/(double)i);
}


in{
 
 int q;
 cin>>q;

 int ans=0;
ll lo=0;
ll hi=n-1;
while(hi>=lo){
    int mid=lo+(hi-lo)/2;
    if(su[mid]<q){
        lo = mid+1;
        ans = mid+1;
    }
    else{
        hi=mid-1;
    }
}
//cout<<lower_bound(su.begin(),su.end(),q)-su.begin()<<"\n";

cout<<ans<<'\n';

}
return 0;
}
//This is krishna.