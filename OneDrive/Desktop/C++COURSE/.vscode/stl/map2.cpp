#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>&m){//for safer side we use &m other wise we use m only if we dont want any manupulation in m
    cout<<m.size()<<endl;
    for(auto &pr:m){//for safer side we use &pr other wise we use m only if we dont want any manupulation in pr
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main(){
    map<int,string>m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    m.insert({8,"Afg"});
    print(m);
    auto it=m.find(8);
    if(it==m.end()){
    cout<<"No value";
    }
    else{
        cout<<it->first<<" "<<it->second<<endl;//for accesing it //it is written this only
    }
}