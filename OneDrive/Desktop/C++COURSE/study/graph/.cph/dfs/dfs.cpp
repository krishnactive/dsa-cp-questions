#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int>g[N];
bool vis[N];
void dfs(int vertex){// no of vertex time called
    /*Take action on vertex after entering
    the vertex
    */
   // if(vis[vertex]) return;
   // vis[vertex] = true;
   cout << vertex << endl;
   vis[vertex] = true;
     for(int child : g[vertex]){// no edges times
        cout << "par" << vertex << ", child" << child << endl;
        if(vis[child]) continue;
        /*Take action on child before 
        entering the child node
        */
        dfs(child);
        /*Take action on child 
        after entering child node
        */
     }
     /*Take action on vertex before 
     exiting the vertex*/
    
}
// O(V+E)
// combined time for loop iterate E times only
int main(){
    int n , m;
    cin >> n >> m;
    for(int i = 0; i < 9; ++i){
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(3);
}