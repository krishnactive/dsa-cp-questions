#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%11==0){
            cout<<"yes";
            }
        else{
            string d=to_string(n);
            
        }
        int count=0;
        string s=to_string(n);
        for(auto &x:s){
            if(x=='1'){
                count++;
            }
        }
        if(count==s.size()){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}