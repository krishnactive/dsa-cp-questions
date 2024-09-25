#include<bits/stdc++.h>
using namespace std;

# define fastio      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
# define ll long long
# define lld long double
# define pb push_back 
# define vi vector<int>
# define vc vector<char>
# define vl vector<ll>
# define ump unordered_map
# define uset unordered_set
# define mset multiset
# define minA(v) *min_element(v.begin(),v.end())
# define maxA(v) *max_element(v.begin(),v.end())
# define st(v) sort(v.begin(),v.end())
# define fi(n) for(int i=0;i<n;i++)
# define in int t; cin>>t; while(t--)
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}



void solve(){
int n;
cin>>n;
string s1,s2;
cin>>s1>>s2;
int win=0;
int lose=0;
for(int i=0;i<n;i++){
    if((s1[i]=='R'&&s2[i]=='S')||(s1[i]=='S'&&s2[i]=='P')||(s1[i]=='P'&&s2[i]=='R')){
        win++;
    }
    else if((s2[i]=='R'&&s1[i]=='S')||(s2[i]=='S'&&s1[i]=='P')||(s2[i]=='P'&&s1[i]=='R')){
        lose++;
    }
}

if(win>lose){
    cout<<0<<"\n";
}
else if(win==lose){
    cout<<1<<"\n";
}
else{
    int tot=lose+win;

        cout<<tot/2+1-win<<"\n";
    
    
}

}

int main(){
	   fastio    
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout<<setprecision(15);
    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    in{

	solve();



}
return 0;
}
//This is krishna.


