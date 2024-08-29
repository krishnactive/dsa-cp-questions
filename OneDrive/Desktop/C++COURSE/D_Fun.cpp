#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;cin>>t;
    auto solve = [&]{
        int n , x;cin>>n>>x;
        long long ans = 0;
        for(int a = 1;a<=min(n,x);a++){
            for(int b = 1;b*a<n&&a+b<x;b++){
                ans+= min(x-a-b, (n-a*b)/(a+b));
            }
        }
        cout<<ans<<"\n";
    };

    while(t--){
        solve();
    }
 }