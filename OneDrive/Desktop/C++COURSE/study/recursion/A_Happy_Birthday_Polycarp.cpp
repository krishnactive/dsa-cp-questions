#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    in{
int n;cin>>n;
string s=to_string(n);
int si=s.size();
int ex=s[0]-'0';
for(int i=1;i<s.size();i++){
    if(s[i]<s[0]){
        ex--;
        if(ex<0) ex=0;
        break;
    }
    else if(s[i]>s[0]){
        break;
    }
}
cout<<ex+(si-1)*9<<"\n";
}
return 0;
}
//This is krishna.