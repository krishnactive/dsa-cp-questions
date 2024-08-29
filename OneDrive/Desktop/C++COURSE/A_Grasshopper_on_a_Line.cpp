#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    in{
ll int n, k;
cin>>n>>k;
ll int nn=abs(n);
bool pass=false;
if(n<0){
    pass=true;
}
if(nn%k!=0){
    cout<<"1\n";
    if(pass) nn*=-1;
    cout<<nn<<"\n";
}
else{
    cout<<"2\n";
    ll int a=nn-1,b=1;
    if(pass) {a*=-1;
    b*=-1;}

    cout<<a<<" "<<b<<"\n";
}

}
return 0;
}
//This is krishna.