#include<bits/stdc++.h>
using namespace std;
int main(){
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
        int j=0,i=0,g=0,vl=0;
        while(true){
            if(i!=g||j!=g)
            if(abs(v[i]-v[j])==v[g]){
                vl++;
                break;
            }
            else{
                j++;
            }
            if(j==n-1){
                j=0;
                i++;
            }
            else if(i==n-1){
                g++;
            }
            if(g==n-1){
                break;
            }
        }
        if(vl!=0){
            cout<<vl<<'\n';
        }
        else{
            cout<<0<<'\n';
        }
    }
    return 0;
}