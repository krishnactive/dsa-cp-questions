#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>1){
            cout<<min(a,b)-1<<'\n';
        }
        else{
            cout<<a+b<<'\n';
        }
    }
    return 0;
}