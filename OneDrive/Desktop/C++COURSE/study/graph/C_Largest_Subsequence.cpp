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
    cin >> n;
    string s;
    cin >> s;
    if(is_sorted(s.begin(),s.end())){
        cout<<"0\n";
        return;
    }
    ll l = s.size();
    vector<bool> ch(l+1,false);
    deque<char> ss;
    ss.push_front(s[l-1]);
    ch[l-1] = true;
    for(int i = l-2;i>=0;i--){

        if(ss.front()<=s[i]){
            ss.push_front(s[i]);
            ch[i] = true;
        }
    }

    reverse(ss.begin(),ss.end());
    int su = 0;
    for(auto &x:ss){
        if(x==ss[ss.size()-1]) su++;
    }
    su--;
    int si= 0;
    for(int i = 0;i<l;i++){
        if(ch[i]==true){
            s[i] = ss[si];
            si++;
        }
    }
    // cout<<ss.size()<<"\n";
    if(is_sorted(s.begin(),s.end())){
        cout<<ss.size()-1-su<<"\n";
    }
    else cout<<"-1\n";
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
