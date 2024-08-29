#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>s;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            int xy;
            cin>>xy;
            s.push_back(xy);
        }
        sort(s.begin(),s.end());
        for(auto x:s){
            m[x]++;
        }
    //auto it=m.begin();
    int v=0,v2=0,v3=0;
    vector<int>cc;
    set<int>see;
    for(auto &sd:s){
        see.insert(sd);
        cc.push_back(m[sd]);
    }
    vector<int> dd;
    for(auto xca:see){
        dd.push_back(xca);
    }
    for(int i=0;i<see.size();i++){
        for(int j=i;j<see.size();j++){
            if(i!=j){
                if(dd[i]>dd[j]){
                    v3++;
                }
                
            }
        }
    }
    for(int i=0;i<see.size();i++){
    if(i!=dd[i]){
        v3++;
    }
    }
    for(int i=0;i<cc.size();i++){
        for(int j=i;j<cc.size();j++){
            if(i!=j){
            if(cc[i]<cc[j]){
                v++;
            }
        }}
    }
    if(v>0||v3>0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    }
    return 0;
}