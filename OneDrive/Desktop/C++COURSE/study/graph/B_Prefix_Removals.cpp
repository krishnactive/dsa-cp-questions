#include <bits/stdc++.h>
using namespace std;
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

void solve() {
    string s;
    cin>>s;
    vector<bool> fr(26,false);
    for(auto &x:s){
        fr[x-'a']=true;
    }
    unordered_map<char , int>cnt;
    int to = 0;
    for(auto &x:s){
        cnt[x]++;
    }
    for(int i = 0;i<s.size();i++){
        if(cnt[s[i]]>1){
            to++;
            cnt[s[i]]--;
        }
        else{
            cout<<s.substr(to)<<"\n";
            return;
        }
    }
    
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.


