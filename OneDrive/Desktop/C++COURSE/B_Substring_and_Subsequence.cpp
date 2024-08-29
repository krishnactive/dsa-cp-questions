#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        
        int mx = -1;
        int ii=-1;
        for(int i=0;i<b.size();i++){
            int t = i;
            int temp = 0;
            for(int j=0;j<a.size();j++){
                if(b[t]==a[j]){
                    temp++;
                    t++;
                }
            }
            
            if(temp>mx){
                mx=temp;
            }
        }
        // cout<<mx<<"\n";
        if(mx==a.size()||mx==b.size()){
           cout<<max(a.size(),b.size())<<"\n";
        }
        else if(mx==0){
            cout<<a.size()+b.size()<<"\n";
        }
        else if(mx>0){
            cout<<a.size()+b.size()-mx<<"\n";
        }
        else{
            cout<<a.size()+b.size()<<"\n";
        }
    }
}