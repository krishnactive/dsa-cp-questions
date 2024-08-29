#include<bits/stdc++.h>
using namespace std;
int main(){
    map< string,int>m;//value is integer type hence m[first]=0 then ++ m[second]=0+1=1 and so on
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}