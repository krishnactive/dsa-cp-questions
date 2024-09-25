#include<bits/stdc++.h>
using namespace std;
# define int long long
signed main(){
    int n, l, r,x;
    cin>>n>>l>>r>>x;
    vector<int>a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
int ans = 0;

    for(int i = 0;i<(1<<n);i++){
        int ma = -1e9 , mi = 1e9 , count = 0, sum = 0;
        for(int j=0;j<n;j++){
            if((i>>j)&1){
                sum+=a[j];
                ma = max(ma,a[j]);
                mi = min(mi,a[j]);
                count++;
            }
        }
        if(count>=2&&ma-mi>=x&&sum>=l&&sum<=r) ans++;
    }
    cout<<ans;
    return 0;
}