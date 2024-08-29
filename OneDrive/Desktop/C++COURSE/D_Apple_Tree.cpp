#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int ,int>>e,a;
        for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            e.push_back({x,y});
        }
        int  q;
        cin>>q;
        for(int i=0;i<q;i++){
            int x,y;
            cin>>x>>y;
            a.push_back({x,y});
        }
        
    }
}