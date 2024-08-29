#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int z=0;
    int nn=0;
    for(auto x:s){
        if(x=='z'){
            z++;
        }
        else if(x=='n'){
            nn++;
        }
    }
    for(int i=0;i<nn;i++){
        cout<<1<<' ';
    }
    for(int j=0;j<z;j++){
        cout<<0<<' ';
    }
    return 0;
}