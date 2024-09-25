#include<bits/stdc++.h>
using namespace std;
#define int long long
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
#define f(i, n) for(int i=0; i<n; i++)
#define fo(i, a, n) for(int i=a; i<n; i++)
#define in int t; cin >> t; while(t--)

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
    uniform_int_distribution<int> uid(0, lim-1);
    return uid(rang);
}

void solve() {
   int a,b;
   cin>>a>>b;
   int xk,yk;
   int xq,yq;
   cin>>xk>>yk>>xq>>yq;
   int xd = abs(xq-xk);
   int yd = abs(yk-yq);
   int ra=(ll)a*2+1;
   int rb=(ll)b*2+1;
   if(xk==xq||yq==yk) {
    xd++;
    yd++;
   }
   if((a==b&&abs(xq-xk)==abs(yq-yk))||(a==0&&b!=0&&(xk==xq||yk==yq)&&(rb==yd||rb==xd))||(a!=0&&b==0&&(xk==xq||yk==yq)&&(ra==yd||ra==xd))){
        cout<<"1\n";
   }
   else if(xd==ra||yd==rb||yd==ra||xd==rb){
     cout<<"2\n";
   }
   else{
    cout<<"0\n";
   }
}

signed main() {
    fastio
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout << setprecision(15);
    
    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    
    in {
        solve();
    }

    return 0;
}
