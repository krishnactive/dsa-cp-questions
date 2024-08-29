#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s,s2,n,n1;
    cin>>s;
    cin>>s2;
    int v;
    for(auto &x:s){
        int v=x;
         if(v>=97){
            v=v-32;
         }
         char c=v;
         n.push_back(c);
    }
    for(auto &x:s2){
        int v=x;
         if(v>=97){
            v=v-32;
         }
         char c=v;
         n1.push_back(c);}
    //int a=a;
    if(n==n1){
        cout<<0;
    }
    else if(n>n1){
        cout<<1;
    }
    else{
        cout<<-1;
    }
    
    return 0;
    }