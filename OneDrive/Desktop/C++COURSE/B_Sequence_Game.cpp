#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    in{
ll n=0;
cin>>n;
vector<ll>b;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    b.pb(x);

}
vector<ll>ans;
for(int i=0;i<n;i++){
    //cout<<b[i]<<" ";
   
    if(i>0&&b[i]<b[i-1]){
        //cout<<b[i]-1<<" ";
        ll xx=b[i]-1;
        if(xx<1) ans.pb(1);
        else ans.pb(b[i]-1);
    }
     ans.pb(b[i]);
}
cout<<ans.size()<<"\n";
for(auto x:ans){
    cout<<x<<" ";
}
cout<<"\n";

}
return 0;
}
//This is krishna.