#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> a(200005,0);
vector<int>edges[200005];
int sum[200005];
int ans = 0;
int all_sum = 0;
int cost = 0;


void dfs_cost(int cur, int par ,int depth){
    cost += a[cur]*depth;
    sum[cur] = a[cur];

    for(auto nxt: edges[cur]){
        if(nxt!=par){
            dfs_cost(nxt, cur, depth+1);
            sum[cur]+=sum[nxt];
        }
    }
}

void dfs(int cur , int par){
    ans = max(ans, cost);
    for(auto nxt:edges[cur]){
        if(nxt!=par){
            int sum_child = sum[nxt]; 
            int sum_cur = all_sum - sum_child;
            cost += sum_cur - sum_child;
            dfs(nxt, cur);
            cost -= sum_cur - sum_child;
        }
    }

}

signed main(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){     
        int u , v;
        cin>>u>>v;
        u--,v--;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    
    for(int i=0;i<n;i++)all_sum+=a[i];
    
    dfs_cost(0,-1,0);

    dfs(0,-1);

    cout<<ans<<"\n";
}