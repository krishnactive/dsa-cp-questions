#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9+7;

int power(int a,int b){
    a %= MOD;
    int ans= 1;
    while(b){
        if(b&1){
            ans = ans*a%MOD;
        }
        a = a*a%MOD;
        b >>=1;
    }
    return ans;
}
signed main(){
    cout<<power(4,200)<<endl;
    cout<<power(2,2);
}