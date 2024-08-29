#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int tot = n;
    map<string,int> fre;
    while(n--){
        string s;
        cin>>s;
        fre[s]++;
    }
    string ans = "";
    int v=-1;
    for(auto &x:fre){
        if(x.second>v){
            ans = x.first;
            v = x.second;
        }
    }
    if(v>tot/2){
        cout<<ans<<"\n";
    }
    
    else{
        cout<<"uh-oh\n";
    }
}