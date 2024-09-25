#include<bits/stdc++.h>
using namespace std;
# define ll long long 
ll dig(ll n){
    ll ans = 0;
    while(n!=0){
        ans+=n%10;
        n /= 10;
    }
    return ans ;
}
int main(){
    ll n;
    cin>>n;
    while(n--){
        ll a, b;
        cin>>a>>b;
        ll di =0;
        
        while(dig(a)%b!=0){
            a++;
        }
        cout<<a<<"\n";
    }

}