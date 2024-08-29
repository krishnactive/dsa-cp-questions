#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int sum=0;
    while(t--){
        string s;
        cin>>s;
        
        for(auto x:s){
            if(x=='+'){
                sum++;
                break;
            }
            else if(x=='-'){
                sum--;
                break;
            }
        }
    }
    cout<<sum;
    return 0;
}