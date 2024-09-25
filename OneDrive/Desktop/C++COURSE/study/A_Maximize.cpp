#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
 int n;
    cin>>n;
    int ans = -1;
    for(int i=1;i<n;i++){
        if(__gcd(n,i)+i!=n)
        ans = max((__gcd(n,i)+i),ans);
    }
    if(ans==-1){
        cout<<"1\n";
    
    }
    else
    cout<<ans<<"\n";
  
}

}