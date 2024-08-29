#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
bool check(string s ,ll l){
    ll count=0;
    for(auto x:s){
        if(x=='('){
            count++;
        }
        else{
            count--;
        }
        if(count<0){
            return false;
        }
    }
    if(count!=0){
        return false;
    }
    return true;
}

int main(){
    in{
        string s;
        cin>>s;
        ll l=s.size();
       ll  fc=0;
       ll  ec=0;
       int ii=0;


for(int i=0;i<l;i++){
    if(s[i]=='('){
        fc++;
    }
    else{
        ii=i;
        break;
    }
}
for(int j=ii;j<l;j++){
    if(s[j]==')'){
        ec++;
    }
    else{
        break;
    }
}

bool pass=true;
if(!(l&1)&&l==2){
    if(check(s,l)){
        cout<<"NO\n";
        pass=false;
    }
    
}
if(pass){
if(fc+ec==l){
    cout<<"YES\n";
    for(int i=1;i<=l;i++){
        cout<<"()";
    }
    cout<<"\n";
}
else{
    cout<<"YES\n";
    for(int i=1;i<=l;i++){
        cout<<"(";
    }
    for(int i=1;i<=l;i++){
        cout<<")";
    }
    cout<<"\n";
}


}


}
return 0;
}
//This is krishna.