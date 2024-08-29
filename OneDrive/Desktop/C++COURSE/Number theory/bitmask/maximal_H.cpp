#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n , k;
    cin>>n>>k;
    vector<int> a(n);
    map<int,int> fre;
    for(int i=0;i<=30;i++)fre[i]=0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        for(int j=0;j<31;j++){
            if(a[i]&(1<<j)){
                fre[j]++;
            }
        }
    }
    int ex = k/n;
    long long ans = 0;
    for(int i=30;i>=0;i--){
        if(n-fre[i]<=k){
            ans+=(1ll<<i);
            k-=(n-fre[i]);
        }
    }
    cout<<ans<<"\n";
}
}