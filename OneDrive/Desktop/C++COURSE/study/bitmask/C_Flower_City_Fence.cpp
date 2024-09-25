#include<bits/stdc++.h>
using namespace std;

# define fastio      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
# define ll long long
# define lld long double
# define pb push_back 
# define vi vector<int>
# define vc vector<char>
# define vl vector<ll>
# define ump unordered_map
# define uset unordered_set
# define mset multiset
# define minA(v) *min_element(v.begin(),v.end())
# define maxA(v) *max_element(v.begin(),v.end())
# define st(v) sort(v.begin(),v.end())
# define fin for(int i = 0 ; i < n ; i++)
# define in ll t; cin >> t; while ( t-- )

void solve(){
    ll n;
    cin>>n;
    vl f(n) , r(n);
    fin{
        cin>>f[i];
    }
    if(f[0]!=n) cout<<"NO\n";
    else{
    fin{
        r[f[i]-1]++;
    }
    for(int i = n-2 ; i >= 0 ; i--){
        r[i]+=r[i+1];
    }
    if(r==f) cout<< "YES\n";
    else cout<< "NO\n";
    }
}


int main(){
	   fastio    
    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout<<setprecision(15);
    in{
	solve();
}
return 0;
}
//This is krishna.


