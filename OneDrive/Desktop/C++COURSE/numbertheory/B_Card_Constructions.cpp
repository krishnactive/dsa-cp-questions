#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
ll dec(ll n){
    ll i=2;
    ll nn=0;
    while(nn<=n){
        
        nn+=(i);
        i+=3;
        
    }
    if(nn!=5)
    return n-(nn-i+3);
    return n-(nn+2-i);
}
int main(){
    in{
    ll n;
    cin>>n;
    ll count=0;
    ll sum=n;
while(sum>=2){
    sum = dec(sum);
    count++;
}
cout<<count<<'\n';
}
return 0;
}
//This is krishna.