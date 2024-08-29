#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int mex(vector<int> v) {
 sort(v.begin(),v.end());
 for(int i=0;i<v.size();i++){
    if(v[i]!=i){
        return i;
    }
 }
 return v[v.size()-1]+1;
}


int main(){
    in{
int n,k;
cin>>n>>k;
vector<int>v(n);
for(auto &c:v){
    cin>>c;
}
while(k--){
    for(int i=0;i<n;i++){
        v[i]=mex(v);
    }
}
for(auto x:v){
    cout<<x<<" ";
}
cout<<"\n";
}
return 0;
}
//This is krishna.


