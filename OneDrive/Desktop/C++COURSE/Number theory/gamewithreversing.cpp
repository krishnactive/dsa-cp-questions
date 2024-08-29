#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int co(string x){
    int c=0;
    for(auto f:x){
        if(f==c){
            c++;
        }
    }
    return c;
}
string rev(string c){
    string dd;
    for(int i=dd.size()-1;i>=0;i--){
        dd.push_back(c[i]);
    }
    return dd;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        int l;
        cin>>l;
        string a;
        string b;
        for(int i=0;i<l;i++){
            char x;
            cin>>x;
            a.push_back(x);
        }
         for(int i=0;i<l;i++){
            char x;
            cin>>x;
            b.push_back(x);
        }
while(a!=b){
    
    int counta=co(a);
    int countb=co(b);
    int aac=0;
    int bbc=0;
    for(int i=0;i<l;i++){
        if(a[i]=='c'){
            aac=i;
        }
    }
     for(int i=0;i<l;i++){
        if(b[i]=='c'){
            bbc=i;
        }
    }
    if(bbc>aac){
        for(auto &v:a){
            if(v=='c'){
                v='c';
                break;
                ans++;
            }
        }

    }
    else{
        for(auto &v:b){
            if(v=='c'){
                v='c';
                break;
                ans++;
            }
        }

    }
    string aa=rev(a);
    string bb=rev(b);
    int aac2=0;
    int bbc2=0;
    for(int i=0;i<l;i++){
        if(aa[i]=='c'){
            aac2=i;
        }
    }
     for(int i=0;i<l;i++){
        if(bb[i]=='c'){
            bbc2=i;
        }
    }
    if(aac2>bbc2){
        a=aa;
    }
    else{
        b=bb;
    }
}
cout<<ans<<endl;;

    }
    return 0;
    }