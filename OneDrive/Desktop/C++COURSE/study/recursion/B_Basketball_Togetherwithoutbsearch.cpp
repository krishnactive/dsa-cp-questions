#include<bits/stdc++.h>
using namespace std;

#define fastio      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
# define ll long long
# define pb push_back 
# define vi vector<int>
# define vc vector<char>
# define vl vector<ll>
# define st(v) sort(v.begin(),v.end())
# define fin for(int i=0;i<n;i++)
# define in int t; cin>>t; while(t--)

auto solve(){
    int n, D;
    cin >> n >> D;
    vi v(n);
    fin{
        cin >> v[i];
    }
st(v);
int m = n;
int ans = 0;
int died=0;
for(int i = n-1; i >= died; i--){
    for(int j = 1; j <= m; j++){
        if((ll)v[i]*j > D){
            ans++;
            if(j!=1)
            died=j;
            m-=j;
            break;
        }
        if(m==0){
            break;
        }
    }
}
cout<<ans<<endl;

}


int main(){
	   fastio    
    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    //in{

	solve();



//}
return 0;
}
//This is krishna.


