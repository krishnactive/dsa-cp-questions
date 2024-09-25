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

bool check(string s){
    int n= s.size();
    for(int i = 0;i<n-1;i++){
        if(s[i]==s[i+1]){
            return false;
        }
    }
    return true;
}


void solve(){
int n,m;
cin>>n>>m;
string s,t;
cin>>s>>t;
int s0=0,s1=0;
int x=0,y=0;
for(int i= 0;i<n;i++){

    if(s[i]=='1'){
        x++;
        s0=max(s0,y);
        y=0;
    }
    if(s[i]=='0'){
        y++;
        s1=max(s1,x);
        x=0;
    }
}
s0=max(s0,y);
s1=max(s1,x);     


// cout<<s0<<" "<<s1<<"\n";
string ss="1010";
// cout<<check(ss);

if(check(s)){
    cout<<"Yes\n";
    return;
}
else{
    if((!check(s))&&(m==2||(!check(t)))){
        cout<<"No\n";
        return;
        
    }
    else if(check(t)){
        if(s0!=1&&(s1==1)||(s0==n&&s1==0)){
            if(t[0]=='1'&&t[m-1]=='1'){
                cout<<"Yes\n";
                return;
            }
        }
        else if(s1!=1&&s0==1||(s1==n&&s0==0)){
            if(t[0]=='0'&&t[m-1]=='0'){
                cout<<"Yes\n";
                return;
            }
        }
        else{
             cout<<"No\n";
             return;}
        
    }
   
   
}
cout<<"No\n";
return;
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


