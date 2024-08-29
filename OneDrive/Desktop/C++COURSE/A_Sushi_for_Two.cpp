#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vei vector<int>
# define vec vector<char>
# define vel vector<ll>
# define fin for(int i=0;i<n;i++)
# define in int t; cin>>t; while(t--)
using namespace std;

bool check(vel v , ll n , ll mid){
    ll one=0;
    ll two = 0;
    int oo=0,tt=0;
    fin{
        if(v[i]==1){
            one++;
            if(mid<=tt&&one==mid) return true;
            oo=one;
            two=0;
        }
        else{
            two++;
            tt=two;
            if(mid<=oo&&tt==mid) return true;
            one=0;
        }
    }
    return false;
}

int main(){
    ll n;
    cin>>n;
    vel v(n);
    fin{
        cin>>v[i];
    }
    ll lo=0;
    ll hi=n/2;
    ll ans=0;
    while(hi>=lo){
        ll mid = hi-(hi-lo)/2;
        if(check(v,n,mid)){
            lo=mid+1;
            ans=mid;
        }
        else{
            hi=mid-1;
        }
    }
    cout<<ans*2;
return 0;
}
//This is krishna.


