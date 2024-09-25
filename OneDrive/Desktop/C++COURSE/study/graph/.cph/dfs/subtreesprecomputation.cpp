//Pre-Computation using DFS | Subtree Queries | CP Course | EP 74

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
/*
Given Q  Queries, Q <= 10^5
In each query given V,
Print subtree sum of V & Number of even numbers
in subtree of V
*/
vector<int>g[N];
int subtree_sum[N];
int even_ct[N];

void dfs(int vertex, int par=0){
    /*take action on after entering the vertex
    */
   if(vertex % 2 == 0){
    even_ct[vertex]++;
   }
   subtree_sum[vertex] += vertex;
   for(int child : g[vertex]){
    /*Take action on child before entering the child node*/
    if (child == par ) continue;
    dfs(child , vertex);
    /*Take action on child after exiting child node*/
    subtree_sum[vertex] += subtree_sum[child];
    even_ct[vertex] += even_ct[child];
   }
   /*Take action on vertex exiting the vertex*/
}



int main(){
    int n;
    cin>>n;

    for(int i = 0;i<n-1;++i){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
    int q  ;
    cin>>q;
    for(int i = 1;i<=n;i++){
        cout<<subtree_sum[i]<<" "<<even_ct[i]<<endl;
    }
    // while(q--){
    //     int v ; 
    //     cin >> v;
    //     cout<<subtree_sum[v]<<" "<<even_ct[v]<<endl;
        
    // }
}