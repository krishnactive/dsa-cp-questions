#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    in{
string s;
cin>>s;
int len=s.size();
int ac=0,bc=0;


    for(auto x:s){
        if(x=='('){
            ac++;
        }
        else break;
    }
    for(int i=len-1;i>=0;i--){
        if(s[i]==')') bc++;
        else break;
    }


if((len&1)==1){    
    if((ac==len-1&&bc==1)||(ac==1&&bc==len-1)||(ac==0&&bc==len)||(ac==len&&bc==0)){
    cout<<"YES\n";
    for(int i=0;i<len;i++){
        cout<<"()";
    }
    cout<<"\n";
    }
    else{
        cout<<"YES\n";
        for(int i=1;i<=len;i++){
            cout<<"(";
        }
        for(int i=1;i<=len;i++){
            cout<<")";
        }
        cout<<"\n";
    }
}
else{
    int su=0;
    bool pass=false;

    for(int i=0;i<len;i++){
        if(s[i]=='('){
            su++;
        }
        else{
            su--;
        }
        if(su<0||(su!=0&&i==len-1)){
            pass=true;
            break;
        }
    }

    
    if(pass){
        if((ac==len-1&&bc==1)||(ac==1&&bc==len-1)||(ac==0&&bc==len)||(ac==len&&bc==0)){
    cout<<"YES\n";
    for(int i=0;i<len;i++){
        cout<<"()";
    }
    cout<<"\n";
    }
    else{
        cout<<"YES\n";
        for(int i=1;i<=len;i++){
            cout<<"(";
        }
        for(int i=1;i<=len;i++){
            cout<<")";
        }
        cout<<"\n";
    }
    }
    else{
cout<<"NO\n";
    }

}


}
return 0;
}
//This is krishna.