#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>s;
    int m,d,n,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push_back(x);
    }
    cin>>m;
    cin>>d;
    int sum=0;
    for(int i=0;i<n;i++){
        if(i+m<=n){
            for(int j=0;j<=m;i++){
                sum=sum+s[i];
            }
        }
    }
    if(sum==d){
        count++;
    }
    cout<<count;
}