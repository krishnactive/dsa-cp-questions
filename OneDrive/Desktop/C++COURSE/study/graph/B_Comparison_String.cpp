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
string s;
cin>>s;
int count=0;
for(int i=0;i<n-1;i++){
    if(s[i]==s[i+1]&s[i]==s[0]){
        count++;
    }
}
cout<<count+2<<"\n";
}
return 0;
}
//This is krishna.