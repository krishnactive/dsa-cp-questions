#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;
const int mx = 1e6+7;
int power(int a,int b){
    a = a%mod;
    int c =1;
    while(b){
        if(b&1){
            c = 1ll*c*a%mod;
        }
        b>>=1;
        a = 1ll*a*a%mod;
    }
    return c;
}
int inv (int n ){
    return power(n,mod-2);
}


int main(){
    int t; cin>>t;
    vector<int> fac(1e6+7,1);

    for(int i = 1;i<mx;i++){
        fac[i] = (1ll*fac[i-1]*i)%mod;
    }
    vector<int> invfac(mx,1);
    invfac[mx-1] = inv(fac[mx-1]);

    for(int i = mx-2;i>=1;i--){
        invfac[i] = 1ll*invfac[i+1]*(i+1)%mod;
    }



    while(t--){
        int a,b;cin>>a>>b;
        cout<<((long long)fac[a]*invfac[b]%mod*invfac[a-b]%mod)%mod<<"\n";
        // cout<<inv(fac[a]);
    }
}
