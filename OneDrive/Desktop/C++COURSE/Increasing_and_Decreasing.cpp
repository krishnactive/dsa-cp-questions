#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    in{
ll x,y,n;
cin>>x>>y>>n;
int i=0;
ll yy=y;
vector<ll>ss;
for(i=1;i<=n-2;i++){

    yy-=i;
    ss.pb(yy);
}
i--;
if(yy>x&&yy-x>i){
    cout<<x<<" ";
    for(i=ss.size()-1;i>=0;i--){
        cout<<ss[i]<<' ';

}
cout<<y<<" \n";
}
else cout<<"-1\n";
}
return 0;
}
