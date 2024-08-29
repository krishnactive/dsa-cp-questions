#include<iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string s="codeforces";
    string x;
    int count=0;
    cin>>x;
    for(int i=0;i<10;i++){
        if(s[i]!=x[i]){
            count++;
        }
        
    }
    cout<<count<<endl;
    cout<<endl;
}
return 0;
}