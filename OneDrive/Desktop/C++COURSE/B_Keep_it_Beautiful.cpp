#include<bits/stdc++.h>
using namespace std;
int main()[
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max=0,s=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            int ss;
            cin>>ss;
            if(ss>max){
                max=ss;
                s++;
            }
            v.push_back(ss);
        }
        if(s==n-1){
            
        }
    }
]