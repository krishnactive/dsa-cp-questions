#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>v;
    int count=1;
    while(n--){
        string x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        if(i+1!=v.size())
        if(v[i]!=v[i+1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}