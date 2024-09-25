#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    in{
        int n,m,k;
        cin>>n>>m>>k;

        int x,y;
        cin>>x>>y;
        vector<pair<int,int>> friends(k);
        for(int i=0;i<k;i++){
           cin>>friends[i].first>>friends[i].second;
        }
for(auto xx:friends){
    if(((xx.first+xx.second)&1)==((x+y)&1)){
        cout<<"NO\n";
        goto end;
    }
}
cout<<"YES\n";
end:
cout<<"";
}
return 0;
}
//This is krishna.