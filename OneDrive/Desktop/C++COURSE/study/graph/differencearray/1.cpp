#include<bits/stdc++.h>
using namespace std;

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX>>1;

signed main(){
    int n; cin >> n;

    int d[n+1]{};

    int q; cin>>q;
    while(q--){
        int l , r, k;
        cin>>l>>r>>k;

        d[l]+=k;
        d[r+1]-=k;
    }
    cout<<d[0]<<" ";
    for(int i = 1; i<n;i++){  
        d[i] += d[i-1];
        cout<<d[i]<<" ";
    }


}