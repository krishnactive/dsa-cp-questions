#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        if(v[0]==v[n-1]) cout<<"-1\n";
        else{
        vector<int>diff;
    
        for(int i=0;i<n-1;i++){
            if(v[i+1]-v[i])
            diff.push_back(v[i+1]-v[i]);
        }
        int fans=diff[0];
        for(int i=0;i<diff.size();i++){
            fans = __gcd(fans,diff[i]);
        }
        cout<<fans<<"\n";}
    }
}