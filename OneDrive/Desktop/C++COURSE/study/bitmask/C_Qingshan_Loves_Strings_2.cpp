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
    string s;
    cin>>s;
    int j=n-1;
    int ans = 0;
    vector<int> ff;
    for(int i=0;i<n/2;i++){
        if(s[j]==s[i]){
            if(s[i]=='0'){
                s.insert(j,"01");
                n+=2;
                // j+=2;
                ans++;
                ff.pb(j);
                if(ans>300){
                    cout<<"-1\n";
                    return;
                }
            }
            else{
                s.insert(i-1,"01");
                n+=2;
                j+=2;
                ans++;
                ff.pb(i-1);
                if(ans>300){
                    cout<<"-1\n";
                    return;
                }
            }
        }
        j--;
    }
    st(ff);
    cout<<ans<<"\n";
    for(auto x:ff){
        cout<<x<<" ";

    }
    cout<<"\n";


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


