#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans;
int a=1 , b=n;
        for(int i=1;i<=n/2;i++){
            ans.push_back(a);
            ans.push_back(b);
            // cout<<i<<" ";
            a++;
            b--;
        }
        if(n%2){
            ans.push_back(b);
        }
for(auto x:ans)cout<<x<<" ";
        cout<<"\n";
    }
}