#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    in{
int n,k;
cin>>n>>k;
string s;
cin>>s;
if((k&1)==0){
    sort(s.begin(),s.end());
    cout<<s<<"\n";
}
else{
    string o , e;
    for(int i=0;i<n;i+=2){
o.pb(s[i]);
    }
for(int i=1;i<n;i+=2){
e.pb(s[i]);
}
int f=0,ff=0;
sort(o.begin(),o.end());
sort(e.begin(),e.end());
for(int i=0;i<n;i++){
    if((i&1)==0){
        cout<<o[f];
        f++;
    }
    else{
        cout<<e[ff];
        ff++;
    }
}
cout<<"\n";


}
    }
return 0;
}
