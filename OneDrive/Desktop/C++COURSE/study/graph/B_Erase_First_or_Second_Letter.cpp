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
    unordered_map<string,int> cnt;

void check(string s){
    if(s.size()<=1) return;

    s.erase(s.begin());
    cnt[s]=true;
    check(s);
    if(s.size()>1){
    s.erase(s.begin()+1);}
    cnt[s]=true;
    check(s);
}

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    // unordered_map<char,int> cnt;
    int ct[27];
    for(int i=0;i<=27;i++){
        ct[i]=0;
    }
    // for(auto x:s){
    //     // cnt[x]=true;
    //     // ans+=cnt.size();

    // }
    s=' '+s;
    for(int i=1;i<=n;i++){
        ct[s[i]-'a']++;
    }
   ll ans =0;
    for(int i=n+1;i>1;i--){
        int tt=0;
        if(i!=n+1)ct[s[i]-'a']--;
        for(int j ='a';j<='z';j++){
            if(ct[j-'a']) tt++;
        }
        ans+=tt;
    }
    cout<<ans<<"\n";
    // cnt.clear();
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


