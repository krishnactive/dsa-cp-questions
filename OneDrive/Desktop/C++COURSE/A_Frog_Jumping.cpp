#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long r;
        long long l;
        long long  n;
        cin>>r>>l>>n;
        long long x=n/2;
        if(n/2!=0){
            x++;
        }
        cin>>r>>l>>n;
        cout<<(x*r)-((n/2)*l)<<'\n';
    }
    return 0;
}