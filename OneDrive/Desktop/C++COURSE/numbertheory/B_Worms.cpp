#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<ll>wfq(n);
    int x=0;
    for(int i=0;i<n;i++){
        
        cin>>wfq[i];
        wfq[i]+=x;
        x=wfq[i];

    }
    int m;
    cin>>m;
    vector<int>ans;
    for(int i=0;i<m;i++){
        ll x;
        cin>>x;
        int lo=0,hi=n-1;
        while(hi>lo){
            int mid=(lo+hi)/2;
            if(x<=wfq[mid]) hi=mid;
            else lo=mid+1; 
        }

        if(wfq[lo]<x) ans.pb(lo+1);
        else ans.pb(hi+1);

    }
    for(auto x:ans){
        cout<<x<<"\n";
    }
return 0;
}
//This is krishna.