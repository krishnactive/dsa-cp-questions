#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9+7;
const int inf = LLONG_MAX>>1;

const int MAX=1e4;

signed main(){
    int spf[MAX+1];
    iota(spf , spf+MAX+1, 0);
    for(int i = 2; i*i<=MAX; i++){
        if(spf[i]==i){
            for(int j=i*i; j<=MAX; j+=i){
                if(j==spf[j]){
                    spf[j]=i;
                }
            }
        }
    }
    // for(int i = 2;i<=MAX;i++){
    //     cout<<i<<":"<<spf[i]<<endl;

    // }
    vector<int>v;
    int n=1e4;
    while(n!=1){
        v.push_back(spf[n]);
        n/=spf[n];
    }
    for(auto i:v){
        cout<<i<<endl;
    }

return 0;
}