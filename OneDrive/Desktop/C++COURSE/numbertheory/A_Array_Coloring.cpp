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
int sum=0;
for(int i=0;i<n;i++){
int x;
cin>>x;
sum+=x;
}
if(!(sum&1)){
    cout<<"YES\n";
}
else{
    cout<<"NO\n";
}
}
return 0;
}
//This is krishna.