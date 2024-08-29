#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    in{
int n,a,q;
cin>>n>>a>>q;
string s;
cin>>s;
int pv=a;
int ch=a;
int xx=0;
 int nvv=0;
bool pass=false;
for(auto x:s){
    if(ch==n) {
    pass= true;
break;

}
if(x=='+'){
    ch++;
    pv++;
    xx++;
}
else{
    nvv++;
    ch--;
}

}
int nv=q-pv;
int rem=n-a;
if(n==a||pass){
    cout<<"YES\n";
}
else{
    if(pv>=n&&ch>=n){
        cout<<"YES\n";
    }
    else if(rem<=xx){
        cout<<"MAYBE\n";
    }
    else{
        cout<<"NO\n";
    }
}

}
return 0;
}
//This is krishna.