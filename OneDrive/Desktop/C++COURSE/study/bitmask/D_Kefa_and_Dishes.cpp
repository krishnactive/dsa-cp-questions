#include<bits/stdc++.h>
using namespace std;
# define ll long long 
int main(){
    ll n , k ,m;
    cin >> n >> m >> k ;
    vector<ll>a;
    // ll combo[20][20];
    ll sum = 0;

    for(int i = 0; i < n; i++){
        ll xx;
        cin>>xx;
        a.push_back(xx);
        
    }

    // vector<vector<ll>> kk;
    for(int i=0;i<k;k++){
        ll x,y,c;
        cin>>x>>y>>c;

        a.push_back(c);
        // combo[x][y] = c;

    }
    sort(a.begin(),a.end());
    ll nn=a.size();
    for(int i= nn-1;i>=0;i--){
        sum+=a[i];
    }
    cout<<sum<<"\n";
}