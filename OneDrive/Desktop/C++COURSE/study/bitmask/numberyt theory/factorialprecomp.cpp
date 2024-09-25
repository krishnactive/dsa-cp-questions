#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9+7;
int power(int a, int b){
    a %=MOD;
    int c = 1;
    while(b){
        if(b&1){
            c=c*a%MOD;
        }
        b>>=1;
        a=a*a%MOD;
    }
    return c;   
}
const int MAX = 1000013;
int fact[MAX+1];

int inv(int n){
    return power(n, MOD-2);
}

int ncr(int n, int r){
    return fact[n]*inv(fact[n-r]*fact[r])%MOD;
}

int gcd(int a,int b){
    while (b){
        int t =a;
        a=b;
        b=t%b;
    }
    return a;
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    fact[0]=1;
    for(int i = 1; i<=MAX; i++){
        fact[i] = fact[i-1]*i%MOD;
    }
cout<<fact[55555]<<" "<<ncr(333333,222222)<<" "<<power(3333,MOD-2)*3333%MOD<<endl;
cout<<gcd(333,223);
}
