#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define lld long double
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vl vector<ll>
#define ump unordered_map
#define uset unordered_set
#define mset multiset
#define minA(v) *min_element(v.begin(),v.end())
#define maxA(v) *max_element(v.begin(),v.end())
#define st(v) sort(v.begin(),v.end())

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

void solve() {
	int n;
    cin>>n;
    bool f =false, s=false,tt=false,ff=false;
    map<int,int>dd ;
    map<int,int>tr; 
    int i =0,j=0;
    while(n--){
        int x,y;
        cin>>x>>y;
        dd[x] = y;
        tr[y]=x;
        
        if(x>0)f=true;
        else if(x<0)ff=true;
        if(y>0)s=true;
        else if(y<0)tt=true;
        
    }

    // for(auto &xx:dd){
    //    int x = xx.first;
    //     int y=xx.second;
    //     if(x>i) f=true;
    //     else if(x<i) s=true;

    //     if(y>j) ff=true;
    //     else if(y<j) tt = true; 
        
    // }
   
    if(f&&s&&tt&&ff)cout<<"NO\n";
    else cout<<"YES\n";
    
}

int main() {
    fastio
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout << setprecision(15);

    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.


