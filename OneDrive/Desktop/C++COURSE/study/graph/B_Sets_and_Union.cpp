#include<bits/stdc++.h>
using namespace std;
#include <set>
#include <algorithm>
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
bool check(vector<set<int>>& a, int x, int mid, set<int>& current_union, int set_index) {

    if (x == 0) {
        return current_union.size() < mid;
    }

    bool result = false;

    
    set<int> new_union = current_union;
    new_union.insert(a[set_index].begin(), a[set_index].end());
    result |= check(a, x - 1, mid, new_union, set_index + 1);

    
    result |= check(a, x, mid, current_union, set_index + 1);

    return result;
}

void solve(){
    int n;
cin>>n;
set<int>all;
vector<set<int>>v;


for(int i=0;i<n;i++){
    int x;
    cin>>x;
 
    for(int j=0;j<x;j++){
        int xx;
        cin>>xx;
        v[i].insert(xx);
        all.insert(xx);
    }
}
int nct= all.size();
int l=0, h=n-1;
int ans=0;
while(h>=l){
    int mid=h-(h-l)/2;
    set<int> current_union;
    current_union.clear();
    if(check(v , nct , mid , current_union, 0 ))
    {
        ans=mid;
        l=mid+1;
    }
    else{
        h = mid-1;
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