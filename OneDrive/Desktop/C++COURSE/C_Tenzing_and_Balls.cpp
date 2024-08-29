#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v;
        for(int i=0 ; i<n  ; i++){
            long long x;
            cin>>x;
            v.push_back(x);
    }
    bool x=false;
    int len=v.size();
    
    //int j=v.size()-1;
    // while(true){
    //      if(v[i]==v[j]&&(i-j)!=0){
    //             v.erase(v.begin()+i,v.begin()+i+j-i+1);
    //             i=0;
    //             j=0;
    //             //x=true;
    //             //break;
    //             j=v.size()-1;
    //             i++;   
    //         }
    //         else{
                
    //             j--;
    //         }
    //         if(j==-1){
    //             j=v.size()-1;
    //         }
    //         if(i=v.size()-1){
    //             break;
    //         }
    // }


int i = 0;
unordered_set<int> encountered;

while (i < v.size()) {
    if (encountered.count(v[i]) > 0) {
        v.erase(v.begin() + i);
    } else {
        encountered.insert(v[i]);
        i++;
    }
}

    // for(int i=0;i<v.size();i++){
    //     for(int j=v.size()-1;j>=0;j--){
    //         if(v[i]==v[j]&&(i-j)!=0){
    //             v.erase(v.begin()+i,v.begin()+i+j-i+1);
    //             i=0;
    //             j=0;
    //             break;   
    //         }
    //     }
    // }
    cout<<encountered.size()+1<<'\n';
    }
    return 0;
    }