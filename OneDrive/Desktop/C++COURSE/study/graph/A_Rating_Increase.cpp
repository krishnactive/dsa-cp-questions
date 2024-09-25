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
int l = s.size();
string s1 = s.substr(0,l/2);
string s2 = s.substr(l/2);
if(stoi(s1)<stoi(s2)&&s2[0]!='0') {cout<<s1<<" "<<s2<<"\n"; return;}

string ans1;
ans1.push_back(s[0]);

int jj=0;
int ii=0;
for(int i=1;i<s.size()-1;i++){
    if(s[i]!='0'){
        ii=i;
        break;
    }
    // else if(s[i]=='0') {
    //     jj=i;
    //     break;
    // }
}
 if((ii+1)>=l/2+1||ii==0){
    cout<<"-1\n";
    return;
 }   
else{
    for(int i=0;i<ii;i++){
        cout<<s[i];
    }
    cout<<" ";
    for(int i=ii;i<l;i++){
        cout<<s[i];
    }
    cout<<"\n";
}

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


