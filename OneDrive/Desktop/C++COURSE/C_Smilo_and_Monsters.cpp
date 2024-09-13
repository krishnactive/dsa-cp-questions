#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    multiset<ll> ms;
    for(auto x:a)ms.insert(x);
    ll ans=0;
    ll x = 0;
    while(!ms.empty()){
        auto itb = ms.begin();
        auto ite = ms.end();ite--;
        if(itb!=ite){
            if(x<*ite){
                ll temp = min(*itb, *ite-x);
                if(temp == *itb){
                    x+=temp;
                    ms.erase(itb);
                }else{
                    ll y = *itb -temp;
                    x+=temp;
                    ms.erase(itb);
                    ms.insert(y);
                }
                ans+=temp;
 
            }else{
                ms.erase(ite);
                ans++;
                x=0;
            }
        }else{
            ll y = *itb;
           
            ans+= (y-x)/2;
            ll temp = x;
            x+= (y-temp)/2;
            y-= (y-temp)/2;
            if(x>0)ans++;
            y-=x;
            ans+=y;
            // if(y-(y-x)/2 !=0)
            break;
        }
    }
    cout<<ans<<endl;
    }
}