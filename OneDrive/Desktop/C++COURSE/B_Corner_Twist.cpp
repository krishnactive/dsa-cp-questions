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
#define fin(a,n) for(int i=0;i<n;i++){ll x; cin>>x;a.pb(x);} 
#define f(n) for(ll i=0;i<n;i++)
#define f1(n) for(ll i=1;i<n;i++)
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define int long long
#define min fmin
#define max fmax
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

void solve() {
    int n,m;cin>>n>>m;

    vector<vector<int>> g1 , g2;

    for(int i=0;i<n;i++){
        vector<int> tem;
        for(int j=0;j<m;j++){
            char x;cin>>x;
            int xx = x-'0';
            tem.push_back(xx);
        }
        g1.push_back(tem);
    }
     for(int i=0;i<n;i++){
        vector<int> tem;
        for(int j=0;j<m;j++){
            char x;cin>>x;
            int xx = x-'0';
            tem.push_back(xx);
        }
        g2.push_back(tem);
    }
for(int i = 0;i<n-1;i++){
    for(int j = 0;j<m-1;j++){
        if(g2[i][j]!=g1[i][j]){
            int dif = abs(g2[i][j]-g1[i][j]);
            int d2 = 3-dif;
            if(g1[i][j]==1){
                if(g2[i][j]==2){
                    g1[i][j] = 2;
                    g1[i+1][j+1] = (g1[i+1][j+1]+1)%3;
                    g1[i][j+1] = (g1[i][j+1]+2)%3;
                    g1[i+1][j] = (g1[i+1][j]+2)%3;
                }
                else if(g2[i][j]==0){
                    g1[i][j] = 0;
                    g1[i+1][j+1] = (g1[i+1][j+1]+2)%3;
                    g1[i][j+1] = (g1[i][j+1]+1)%3;
                    g1[i+1][j] = (g1[i+1][j]+1)%3;
                }
            }
            else if(g1[i][j]==0){
                if(g2[i][j]==2){
                    g1[i][j] = 2;
                    g1[i+1][j+1] = (g1[i+1][j+1]+2)%3;
                    g1[i][j+1] = (g1[i][j+1]+1)%3;
                    g1[i+1][j] = (g1[i+1][j]+1)%3;
                }
                else if(g2[i][j]==1){
                    g1[i][j] = 1;
                    g1[i+1][j+1] = (g1[i+1][j+1]+1)%3;
                    g1[i][j+1] = (g1[i][j+1]+2)%3;
                    g1[i+1][j] = (g1[i+1][j]+2)%3;
                }
            }
            else if(g1[i][j]==2){
                if(g2[i][j]==1){
                    g1[i][j] = 1;
                    g1[i+1][j+1] = (g1[i+1][j+1]+2)%3;
                    g1[i][j+1] = (g1[i][j+1]+1)%3;
                    g1[i+1][j] = (g1[i+1][j]+1)%3;
                }
                else if(g2[i][j]==0){
                    g1[i][j] = 0;
                    g1[i+1][j+1] = (g1[i+1][j+1]+1)%3;
                    g1[i][j+1] = (g1[i][j+1]+2)%3;
                    g1[i+1][j] = (g1[i+1][j]+2)%3;
                }
            }
        }
    }
}
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(g1[i][j]!=g2[i][j]){
                cout<<"NO\n";
                return;
            }
        }
    }

cout<<"YES\n";


}

signed main() {
    fastio
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout << setprecision(15);

    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
