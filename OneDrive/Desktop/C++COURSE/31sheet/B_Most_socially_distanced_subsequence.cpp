#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v(n+1);
        for(int i=1;i<=n;i++)cin>>v[i];
        vector<int> ans;
        for(int i= 1;i<=n;i++){
            if(i==1||i==n||(v[i]>v[i-1]&&v[i]>v[i+1])||(v[i]<v[i-1]&&v[i]<v[i+1])){
                ans.push_back(v[i]);
            }
        }
        cout<<ans.size()<<"\n";
        for(auto x:ans)cout<<x<<" ";
        cout<<"\n";
    }
}