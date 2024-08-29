#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l;
        string s;
        cin>>l;
        cin>>s;
        vector<char>c;
        int j=0,count=1;
        for(int i=0;i<s.size();i++){
            char a=s[j];
            if(j!=i){
            if(a==s[i]){
                c.push_back(s[i]);
                j=i+1;
                
            }
            }
            
        }
    //c.push_back(s[s.size()-1]);
    if(c[c.size()-1]!=s[s.size()-1]){
        c.push_back(s[s.size()-1]);
    }
    for(auto xx:c){
        cout<<xx;
    }
    cout<<endl;
    }

return 0;
}