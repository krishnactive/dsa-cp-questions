#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

vector<int>g[N];
vector<vector<int>> cc;
vector<int> current_cc;

bool vis[N];
void dfs(int vertex){
    current_cc.push_back(vertex);
    vis[vertex] = true;
    for(int child:g[vertex]){
        if(vis[child]) continue;
        dfs(child);
    }
}


int main(){
    int n , e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int cnt = 0;
    for(int i=1;i<=n;i++){
        if(vis[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        cnt++;
    }
    // cout<<cnt<<endl;
    cout<<cc.size()<<endl;

    for(auto cc_c:cc){
        for(auto vertex:cc_c){
            cout<<vertex<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}