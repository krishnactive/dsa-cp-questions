#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;cin>>t;

    auto solve = [&](){
        long long x,y,z,k; cin>>x>>y>>z>>k;
        long long ans = 0;
        for(int i = 1;i<=x;i++){
            for(int j = 1;j<=y;j++){
                if(k%(i*j))continue;
                long long c = k/(i*j);
                if(c<=z){
                    ans = max(ans, 1ll*(x-i+1)*(y-j+1)*(z-c+1));
                }
            }
        }
        cout<<ans<<"\n";

    };


    while(t--){
        solve();
    }
}