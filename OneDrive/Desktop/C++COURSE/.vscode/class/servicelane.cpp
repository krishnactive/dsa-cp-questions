#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int>v;
    for (int i=0;i<n;i++){
        int c;
        cin>>c;
        v.push_back(c);
    }
    //cout<<endl;
    for(int i=0;i<t;i++){
        int l,h;
        cin>>l>>h;
        int hh=3;
        for(int f=l;f<=h;f++){
            if(hh>v[f]){
                hh=v[f];
            }
            
        }
        cout<<hh<<endl;
    }
    return 0;
}