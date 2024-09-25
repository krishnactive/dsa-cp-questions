#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod  = 1e9+7;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll ans = 1;
for(int j=2;j<=n;j++){
    for(int i = 0;i<n-1;i++){
        bool pass = false;
        ll s = 0;
        for(int k = i;k<i+j-1;k++){
            if(a[i]!=0){
                pass = true;
                s+=a[i];
            }
        }
        if(pass){
            if(s+a[i+j-1]!=a[i+j-1]){ans = (ans*2)%mod;}
        }

    }
}
cout<<ans;


}