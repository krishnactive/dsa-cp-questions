#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    in{
int n;
cin>>n;
vector<int>ar,b,c;
for(int i =0 ;i < n; i++){
    int xx;
    cin>>xx;
    ar.pb(xx);
}
sort(ar.begin(),ar.end());

if(ar[0]==1){
    for(auto x:ar){
        if(x==1){
            b.pb(1);
        }
        else{

            c.pb(x);
        }
    }
}
else{
   
for(int i =0 ;i<n;i++){
    if(ar[i]==ar[0]){
       b.pb(ar[i]); 
    }
    else{
        c.pb(ar[i]);
    }
}
}
if(c.size()==0) cout<<"-1\n";
else{
cout<<b.size()<<' '<<c.size()<<'\n';
for(auto x:b){
    cout<<x<<" ";
}
cout<<"\n";
for(auto x:c){
    cout<<x<<" ";
}
cout<<"\n";
}}
return 0;
}
//This is Krishna
