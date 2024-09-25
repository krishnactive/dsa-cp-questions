// pre Computation is best to overcome time complexity
# include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

vector<int> g[N];
long long subtree_sum[N];
int even_ct[N];


void dfs(int vertex , int par =0){

    subtree_sum[vertex]+= vertex;
    if(vertex%2 == 0) even_ct[vertex]++;
    // vertex ka value khud vertex he hai if diya hai to = value[vertex] kar dena
    for(int child:g[vertex]){

        if(child == par) continue;
        dfs(child , vertex);
        subtree_sum[vertex] += subtree_sum[child];
        even_ct[vertex]+=even_ct[child];
    }
}

int main(){
    int n;
    cin>>n;
    for(int i = 0;i < n-1;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
// for(int  i =1 ;i<=n;i++){
//     // if(g[i].size()==1){
//         subtree_sum[i] = i;
//     // }
// }
    dfs(1);
    int query;
    cin>>query;

    for(int i = 1;i <= n; i++){
        cout<<subtree_sum[i]<<" "<<even_ct[i]<<"\n";
    }
    // while (query--)
    // {
    //     int v;
    //     cin>>v;
    //     cout<<subtree_sum[v]<<" "<<even_ct[v]<<"\n";
    // }
    
}