#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9+7;
const int inf = LLONG_MAX>>1;

const int MAX=1e7;

signed main(){
    bool sieve[MAX+1];
    fill(sieve , sieve+MAX+1 ,true);

    sieve[0] = sieve[1] = false;

    for(int i = 2;i*i<=MAX;i++){
        if(sieve[i]){
            for(int j= i*i;j<=MAX;j+=i){
                sieve[j]=false;
            }
        }
    }
    for(int i= 2;i<=MAX;i++){
        if(sieve[i]){
            cout<<i<<endl;
        }
    }

}