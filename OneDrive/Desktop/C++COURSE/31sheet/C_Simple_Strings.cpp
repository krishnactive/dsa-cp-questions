#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    if(s.size()==1){
        cout<<s;
    }
    else if(s.size()==2){
        if(s[0]==s[1]){
            if(s[1]=='z'){
                s[1]= 'a';
            }
            else
                s[1] = char((int(s[1])+1));
        }
        cout<<s;
    }
}