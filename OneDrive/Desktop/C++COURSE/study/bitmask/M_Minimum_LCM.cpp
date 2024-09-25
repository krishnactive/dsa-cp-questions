#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=1 , b=n-1;
        int cur = n-1;
        if(n&1){
        for(int i =2;i*i<=n;i++){
            if((n%i == 0)){
                int x=max(n/i,n-n/i);
                int y = min(n/i,n-n/i);
                int temp=x*y/__gcd(x,y);
                if(temp<cur){
                    cur=temp;
                    a=y,b=x;
                }
            }
        }
        cout<<a<<" "<<b<<"\n";
        }
        else{
            cout<<n/2<<" "<<n/2<<"\n";
        }
    }
    return 0;
}