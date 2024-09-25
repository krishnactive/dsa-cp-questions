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
ll su=0;
for(int i=1;i<=n;i++){
    if(i!=n/2+1)
    su+=i*i;
}
//su+=(n-1)*(n);
if(n==2) cout<<2<<"\n";
else cout<<su<<"\n";

}
return 0;
}
//This is krishna.