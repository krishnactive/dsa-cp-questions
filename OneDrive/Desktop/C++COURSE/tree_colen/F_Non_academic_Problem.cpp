#include<bits/stdc++.h>
using namespace std;
#define int long long

long long ans ;
int n,m;
 // number of nodes
vector<vector<int>> adj; // adjacency list of graph
vector<bool> visited;
vector<int> tin, low;
int timer;

void IS_BRIDGE(int v,int to, int count){
    ans = fmin(ans, 1ll*count*(count-1)/2+(n-count)*(n-count-1)/2);
} // some function to process the found bridge

int dfs(int v, int p = -1) {
    int c = 1;
    visited[v] = true;
    tin[v] = low[v] = timer++;
    bool parent_skipped = false;
    for (int to : adj[v]) {
        if (to == p && !parent_skipped) {
            parent_skipped = true;
            continue;
        }
        if (visited[to]) {
            low[v] = min(low[v], tin[to]);
        } else {
            long long count = dfs(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] > tin[v])
                IS_BRIDGE(v, to,count);
            c+= count;
        }
    }
    return c;
}

signed main(){
    int t;
    cin>>t;
    auto solve = [&](){
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        timer = 1;
        ans = n*(n-1)/2; // all disconnected no path
        dfs(1);
        cout<<ans<<"\n";
    };
    
while(t--){
    cin>>n>>m;
    adj.assign(n + 1, vector<int>());
    visited.assign(n + 1, false);
    tin.assign(n + 1, -1);
    low.assign(n + 1, -1);
	timer=1;
    solve();
}

}