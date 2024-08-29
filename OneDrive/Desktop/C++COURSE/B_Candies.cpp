#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        int n;
        cin>>n;
        if(n%2==0){
            cout<<-1<<'\n';
        }
        else if(n==1){
            cout<<1<<'\n'<<1<<'\n';
        }
        else{
            while(n>1){
            if(n%4==1){
                v.push_back(1);
                n=n/2+1;
            }
            else if(n%4==3){
                v.push_back(2);
                n=n/2;
            }
            if(v.size()==40){
                break;
            }
            }
            if(v.size()<=40){
            cout<<v.size()<<'\n';
            for(int i=v.size()-1;i>=0;i--){
                cout<<v[i]<<' ';
            }
            cout<<'\n';
            }
            else{
                cout<<-1<<'\n';
            }
        }
    }
    return 0;
}