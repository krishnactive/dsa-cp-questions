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
ll l;
string s;
cin>>l>>s;
string ans;
  bool pass = false,se=false, th=false;
    if(s[l-3]=='0'){
        pass = true;
    }
    if(s[l-2]=='0'){
        se = true;
    }
string ss = s;
if(l>3){
  
    ss=ss.substr(l-3,3);
    ll n = stoi(ss);
    if(n%8==0){
        cout<<s<<"\n";
    }
    else{
        int r = n%8;
        if(n%10<5){
            n+=r;
        }
        else{
            n-=r;   
        }
        cout<<s.substr(0,l-3);
        if(pass){
        cout<<'0';
        }
        if(pass&&se){
            cout<<'0';
        }
       cout<<to_string(n)<<"\n";
    }
}
else{
    int n = stoi(s);
       int r = n%8;
       if(l!=1){
        if(n%10<5){
            n+=r;
        }
        else{
            n-=r;
        }
        cout<<n<<"\n";
}
else{
    cout<<"8\n";
}
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


