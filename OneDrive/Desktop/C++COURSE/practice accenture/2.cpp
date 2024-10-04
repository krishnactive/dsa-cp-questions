#include<iostream>
#include<map>

using namespace std;

int main(){
    map<char,int> fre;
    string s;cin>>s;

    for(auto x:s){
        if(islower(x)){
            fre[x]++;
        }
        if(fre[x]>1){
            cout<<x;
            return 0;
        }
    }
    cout<<"-1";
}