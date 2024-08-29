#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    in{
int n;
cin>>n;
int ms=0;
for(int i=31;i>=0;i--){
    if(((n>>i)&(1))==1){
        ms=i;
        //cout<<1;
        break;

    }
    //else cout<<0;
}
vector<int>ans;
ans.pb(n);
int nn=n;
for(int i=0;i<ms;i++){
    if(((n>>i)&(1))==1){
        ans.pb(nn-(1<<i));
        nn-=(1<<i);
    }
}
ms=(1<<ms);
while(true){
    ans.pb(ms/2);
    ms/=2;
    if(ms<=1) break;
}
cout<<ans.size()<<"\n";
for(auto x:ans){
    cout<<x<<" ";
}
cout<<"\n";
}
return 0;
}
