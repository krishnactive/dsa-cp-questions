#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,k;cin>>n>>k;

    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    map<int,int> fre;
    int prefix_sum = 0;
    int ans = 0;
    fre[0] = 1;
    for(int i = 0;i<n;i++){
        prefix_sum+=v[i];
        ans+=fre[prefix_sum-k];
        fre[prefix_sum]++;
    }
    cout<<ans;
}