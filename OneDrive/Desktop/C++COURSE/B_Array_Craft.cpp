#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    auto solve = [&]{
        int n,x,y; cin>>n>>x>>y;
        
        for(int i=1;i<=n;i++){
            if(i>x&&(x+1)%2==i%2){
                cout<<"-1 ";
            }
            else if(i<y&& (y-1)%2==i%2){
                cout<<"-1 ";
            }
            else{
                cout<<"1 ";
            }
        }
        cout<<"\n";
    };
    while(t--){
        solve();
    }
} 