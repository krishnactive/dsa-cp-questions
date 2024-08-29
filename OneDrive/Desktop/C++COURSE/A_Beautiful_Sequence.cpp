#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int  t=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if(i>=x){
                t++;
            }
        }
        if(t>0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}