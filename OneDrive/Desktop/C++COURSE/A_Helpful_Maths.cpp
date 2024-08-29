#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    vector<char>v;
    for(auto &x:s){
        if(x!='+'){
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i!=v.size()-1){
            cout<<'+';
        }
    }
    return 0;
}