#include<bits/stdc++.h>
using namespace std;
void print(set<string>&s){
    for(string value:s){
        cout<<value<<endl;
    }
    //for(auto it=s.begin();it!=s.end();it++){
    //    cout<<(*it)<<endl;
    //}
}
int main(){
    set<string>s;
    s.insert("kri");
    s.insert("shn");
    s.insert("akant");
    auto it =s.find("kr");
    cout<<*it;
    //print(s);
}