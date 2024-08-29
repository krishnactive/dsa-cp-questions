#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        map<int,int> fre;
        for(int i=0;i<n;i++){
            fre[v[i]]++;
        }
        long long ans = 1e18;
        for(auto& x: fre){
            ans = fmin(ans, (long long)(n-x.second)*x.first);
        }
        if(ans>n){
            cout<<n<<"\n";
            
        }
        else
            cout<<ans<<"\n";
    }
}