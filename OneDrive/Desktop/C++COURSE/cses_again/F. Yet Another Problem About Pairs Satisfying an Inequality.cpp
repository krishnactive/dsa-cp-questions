#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        long long ans = 0;
        for(int i=1;i<=n;i++){
            int x ; 
            cin>>x;
            if(i>x){
                ans+= (long long)(lower_bound(a.begin(),a.end(),x)-a.begin());
                a.push_back(i);
            }
        }
        cout<<ans<<"\n";
    }
}