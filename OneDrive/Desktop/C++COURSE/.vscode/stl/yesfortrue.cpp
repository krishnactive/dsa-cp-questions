#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<string>s;
    int n;
    cin>>n;//no strings
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);//0(1)
    }
    int q;//total queries
    cin>>q;
    while(q--){
        string str;//string to match
        cin>>str;
        if(s.find(str)==s.end()){//0(1)
            cout<<"no\n";
        }
        else{
            cout<<"yes";
        }
    }
    return 0;
}