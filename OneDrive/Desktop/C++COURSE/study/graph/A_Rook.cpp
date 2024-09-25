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
#define minA(v) *min_element(v.begin(), v.end())
#define maxA(v) *max_element(v.begin(), v.end())
#define st(v) sort(v.begin(), v.end())
#define f(i, n) for(int i = 0; i < n; i++)
#define fr(i, a, n) for(int i = a; i < n; i++)
#define in int t; cin >> t; while(t--)
// use INT_MAX for maximum value

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
    uniform_int_distribution<int> uid(0, lim-1);
    return uid(rang);
}

void solve() {
string s;
cin>>s;
int p = s[1]-'0';
for(int i=1;i<=8;i++){
    if(i==p) continue;
    else{
        cout<<s[0]<<i<<"\n";
    }
}
for(int i=97; i <=104;i++){
    if(static_cast<int>(s[0])==i) continue;
    else{
        cout<<static_cast<char>(i)<<p<<"\n";
    }
}
}

int main() {
    fastio;
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
