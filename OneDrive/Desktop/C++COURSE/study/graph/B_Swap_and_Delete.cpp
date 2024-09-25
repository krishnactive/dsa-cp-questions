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
	string s;
    cin>>s;
    int z=0;
    int o=0;
    for(auto x:s){
        if(x=='0')z++;
        else o++;
    }
    // if(o==z){
    //     cout<<"0\n";
    // }
    // else{
        string ans ;
        for(auto x:s){
            if((x=='0'&&o<=0)||(x=='1'&&z<=0)){
                break;
            }
            if(x=='0'&&o>0){
                ans.push_back('1');
                o--;
            }
            else if(x=='1'&&z>0){
                ans.push_back('0');
                z--;
            }
        }
        cout<<s.size()-ans.size()<<"\n";
    // }
    


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


