#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vi vector<int>
# define vc vector<char>
# define vl vector<ll>
# define fin for(int i=0;i<n;i++)
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    in{
string a,b;
cin>>a>>b;
for(int i=0;i<a.size();i++){
    if(a[i]=='0'&&b[i]=='0'&&a[i+1]==b[i+1]&&a[i+1]=='1'){
        cout<<"YES\n";
        goto end;
    }

}

cout<<"NO\n";
end:
cout<<"";
}
return 0;
}
//This is krishna.
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  