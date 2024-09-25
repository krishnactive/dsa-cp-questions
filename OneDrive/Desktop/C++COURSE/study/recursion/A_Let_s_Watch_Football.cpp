#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
# define ll long long
# define pb push_back 
# define vi vector<int>
# define vc vector<char>
# define vl vector<ll>
# define fin for(int i = 0; i < n; i++)
# define in int t; cin>>t; while(t--)

void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    if(b>=a) cout<<"0\n";
    else{
        cout<<ceil(((double)a*c-b*c)/b);
    }


}


int main(){
	   fastio    
    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "K", stdin);
        freopen("output1.txt", "A", stdout);
    #endif
    //in{

	solve();

//}
return 0;
}
//This is krishna.


