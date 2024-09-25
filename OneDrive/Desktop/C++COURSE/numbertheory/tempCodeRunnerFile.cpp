#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
bool prime(int x){
    int co=0;
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
            co++;
        }
        if(co>=2) return false;
    }
    return true;
}
int main(){
    in{
ll x;
cin>>x;
ll rt=(ll)sqrt(x);
((ll)(rt*rt)==x&&x!=1&&prime(rt)) ? cout<<"YES\n":cout<<"NO\n";

}
return 0;
}
//This is krishna.