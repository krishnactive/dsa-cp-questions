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
    string c;
    cin>>c;
    int b = 0, B = 0;
    int i = c.size()-1;
    int j = i-1;
    auto it = c.begin()+i;
    while(i>=0){
        if(c[i]=='b'){
            b++;
            c[i] = '.';
        }
        else if(c[i]=='B'){
            B++;
            c[i] = '.';
        }
        else if(b!=0&&(int)c[i]>=97&&(int)c[i]<=122){
            c[i] = '.';
            b--;
        }
        else if(B!=0&&(int)c[i]>=65&&(int)c[i]<=90){
            c[i] = '.';
            B--;
        }
        i--;
        // it--;
    }
    for(auto x:c){
        if(x!='.')cout<<x;
    }
    cout<<"\n";
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
