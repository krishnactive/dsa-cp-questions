#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<char>d;
    for(auto x:s){
        d.insert(x);
    }
    if(d.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<< "IGNORE HIM!";
    }
    return 0;
}