#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    vector<int> f(n),b(n);
    for(int i=1;i<n;i++){
        if(s[i]=='v'&&s[i]==s[i-1]){
            f[i] = f[i-1]+1;
        }
        else{
            f[i] = f[i-1];
        }
    }
    for(int i = n-2;i>=0;i--){
        if(s[i]=='v'&&s[i] == s[i+1]){
            b[i] = b[i+1]+1;
        }
        else{
            b[i] = b[i+1];
        }
    }
   long long ans = 0;
    for(int i = 0;i<n;i++){
        if(s[i]=='o'){
            ans+= (long long)f[i]*b[i];
        }
    }
    cout<<ans<<"\n";
}