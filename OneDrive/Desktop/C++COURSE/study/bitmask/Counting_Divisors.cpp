#include<bits/stdc++.h>
using namespace std;
# define int long long 
const int MAX = 1e6;

signed main(){
//   cout<<3;
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
    int n ;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        unordered_map<int,int>v;
        int count = 1;
        while(a!=1){
            v[spf[a]]++;
            a/=spf[a];
        }
        for(auto x:v){
            count*=(x.second+1) ;
        }
        cout<<count<<"\n";
    }
  
    return 0;
}