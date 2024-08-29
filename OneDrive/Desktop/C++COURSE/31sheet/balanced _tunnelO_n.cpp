#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;cin>>n;
    vector<int> a(n),b(n) , pos(n),c(n);
    auto vec = [&](vector<int>& v){
        for(int i=0;i<n;i++){
            cin>>v[i];
            v[i]--;
        }
    };
    vec(a);
    vec(b);
    for(int i = 0;i<n;i++){
        pos[b[i]] = i; 
    }

    for(int i = 0;i<n;i++){
        c[i] = pos[a[i]];
    }
    int mx = -1;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(c[i]>mx){
            mx = c[i];
        }
        else ans++;
    }
    cout<<ans<<"\n";

}