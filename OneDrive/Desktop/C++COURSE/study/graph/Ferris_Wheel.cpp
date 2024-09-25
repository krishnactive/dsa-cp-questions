#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    vector<int>v;
    for(int i = 0; i<a;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int i=0,j=a-1;
    int ans = 0;
    while(i<=j){
        if(v[i]+v[j]<=b){
            ans++;
            i++;
            j--;
        }
        else{
            ans++;
            j--;
        }
    }
    cout<<ans;
}