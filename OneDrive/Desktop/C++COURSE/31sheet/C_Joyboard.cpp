#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m,k; cin>>n>>m>>k;
        if(k>=4){
            cout<<"0\n";
        }
        else{
            if(k==3){
                cout<<((m+1>n)?m-n-m/n+1:0);
                cout<<"\n";
            }
            else if(k==2){
                cout<<(m/n+ min(n-1,m))<<"\n";
            }
            else{
                cout<<"1\n";
            }
        }
    }
}