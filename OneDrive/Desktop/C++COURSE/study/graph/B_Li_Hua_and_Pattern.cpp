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
    int n, k;
    cin>>n>>k;
    int m[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            m[i][j] = x;
        }
    }
    if(n==1) {
        cout<<"YES\n";
        return;
    }
    int a=n-1;
    int ans =0;
    int s1=a/2 ,s2=a/2;
    if(a%2!=0){
        s1=a/2;
        s2 = a;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // if(i==s1&&j==s2) break;
            if(m[i][j]!=m[a-i][a-j]) {
                ans++;
                m[i][j]=m[a-i][a-j];
            }
        }
    }
    // ans/=2;
    // cout<<"YES\n";
    // cout<<ans<<" ";
    if((((k-ans)%2==0||n%2!=0)&&ans<=k)){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
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


