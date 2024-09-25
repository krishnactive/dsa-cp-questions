#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int mod = 1e9+7;
int main(){
    int n;cin>>n;
    string s; cin>>s;
    s.push_back(s[n-1]);
    int cnt =1;
ll ans = 1;
    for(int i=0;i<n;i++){
        if(s[i]!=s[i+1]){
            cnt++;
        }
        else{
            if(cnt%2==0){
                cnt = cnt/2;
            }
            else{
                cnt = (cnt+1)/2;
            }

            ans = (ans*cnt)%mod;
            cnt = 1;
        }
        
    }
    cout<<ans<<"\n";
}