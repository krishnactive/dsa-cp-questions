#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="codeforces";
    int t;
    cin>>t;
    while(t--){
        string ss;
        cin>>ss;
        int count=0,i=0;
        for(auto &x : ss){
            if(x!=s[i]){
                count++;
            }
            i++;
        }
        cout<<count<<endl;
    }
    return 0;
}