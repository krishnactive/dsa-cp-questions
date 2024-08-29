#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    auto solve = [&]{
        int n,m;cin>>n>>m;
        long long ans = 0;  
        ans += max(n,m)*(max(n,m)+1);
        int ex = min(n,m);
        ex--;
        int mx = max(n,m);
        mx++;
        ex*=2;
        while(ex--){
            ans+=mx;mx++;
        }
        cout<<ans<<"\n";
    };
    while(t--){
        solve();
    }
}
