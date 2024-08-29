#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()==2){
            cout<<s[1]<<'\n';
        }
        else{
            char t=*min_element(s.begin(),s.end());
            cout<<t<<'\n';
        }
    }
    return 0;
}