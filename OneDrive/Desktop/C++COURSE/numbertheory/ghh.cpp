#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0,c2=0;
    vector<int>bracs;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){ count++;
        bracs.pb(c2);
        }
        else if(s[i]==')'){
            c2++;
             count--;

             }
    }    

cout<<*max_element(bracs.begin(),bracs.end());

return 0;
}
//This is krishna.