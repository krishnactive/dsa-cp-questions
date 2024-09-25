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
# define fin for(int i=0;i<n;i++)
# define in int t; cin>>t; while(t--)

auto solve(){
int n;
cin>>n;
vector<pair<int,int>> tr;
fin{
    int d,s;
    cin>>d>>s;
    tr.pb({d,s});
}
// sort(tr.begin(), tr.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        // return a.first < b.first;
    // });
// int ans= tr[0].first-1;
int ans=1e9;
// int may=0;
// int aa=ans;
// int tpp=floor((double)tr[0].second/2);

// if(tpp*2==tr[0].second) tpp--;
// int to=tpp;
// ans+=to;
// if(n>1){
// int too=floor((double)tr[1].second/2);

// if(too*2==tr[1].second) too--;
// int toi=too;



// for(int i=2;i<=toi;i++){
//     //int tp=floor((double)tr[i-1].second/2);
//     int t2=floor((double)tr[i].second/2);
//     //if(tp*2==tr[i-1].second) tp--;
//     if(t2*2==tr[i].second) t2--;

//     if(t2<toi-i){
//         toi=t2;
        
//     }
//      ans++;
//     if(toi-i==0) break;
   

// }}
// cout<<ans+may<<"\n";

for(int i=0;i<n;i++){
    
    if(tr[i].second>=3){
        if(tr[i].second%2==1){
            ans=min(ans,tr[i].first+tr[i].second/2);
        }
        else{
            ans=min(ans,tr[i].first+tr[i].second/2-1);
        }
    }
    else{
        ans=min(ans,tr[i].first);
    }
}
cout<<ans<<"\n";



}


int main(){
	   fastio    
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


