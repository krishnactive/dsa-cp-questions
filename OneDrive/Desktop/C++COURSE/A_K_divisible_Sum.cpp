#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vei vector<int>
# define vec vector<char>
# define vel vector<ll>
# define fin for(int i=0;i<n;i++)
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    in{
int n,k;
cin>>n>>k;
if(k>=n){
    int ps=0;
if(k%n!=0){
ps++;
}
cout<<k/n+ps<<"\n";
}
else{
    int ps=0;
     k=ceil((double)n/(double)k)*k;
    if(k%n!=0){
ps++;
}
    cout<<k/n+ps<<"\n";
}

}
return 0;
}
//This is krishna.


