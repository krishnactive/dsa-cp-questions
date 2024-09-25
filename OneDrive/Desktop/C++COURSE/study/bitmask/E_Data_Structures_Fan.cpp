#include<bits/stdc++.h>
using namespace std;
# define ll long long 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a;
        string s;
        ll xo = 0;
        ll x1 = 0;
        vector<ll>pre;
        ll all = 0;
        for(int i =0 ; i<n ; i++){
            ll x ;
            cin>>x;
            all^=x;
            pre.push_back(all);
            a.push_back(x);
        }
        cin>>s;
        for(int i= 0;i<n;i++){
            if(s[i]=='0') {
                xo ^= a[i]; 
            }
            else{
                x1 ^= a[i];
            }
        }
        ll q;
        cin>>q;
        vector<ll >ans;
        while(q--){
            ll p,qq,r;
            cin>>p;
            if(p==2){
                cin>>qq;
                if(qq==0)ans.push_back(xo);
                else ans.push_back(x1);
            }
            else{
                cin>>qq;
                cin>>r;
                if(qq!=1){
                xo ^= (pre[r-1]^pre[qq-2]);
                x1 ^= (pre[r-1]^pre[qq-2]);
                }
                else{
                    xo ^= (pre[r-1]);
                x1 ^= (pre[r-1]);
                }
              
            }
        }
for(auto x:ans){
    cout<<x<<" ";
}
cout<<"\n";
    }
}