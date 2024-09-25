#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
int graph1[N][N];

vector<int>graph2[N];

int main(){
    int n , m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph1[v1][v2]=1;
        graph1[v2][v1]=1;
// for weight 1 = wt
        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);
        // for weight make pair 
        //vector<pair<int , int >> graph2;  / before take input
        // graph2[v1].push_back({v1,wt});
        // graph2[v2].push_back({v2,wt});
    }
//Adjacency matrix 
//O(n^2) - space complexity
//n!=10^5  n<=10^3

// adjacency list
// O(N+M)
// N = 10 ^ 5 , E < 10^7

// connected i ,j ?
if(graph1[i][j] == 1){
    //connected
}
graph1[i][j]; //O(1)

// list 
for(pair<int , int>child:graph2){
    if(child.first == j){
        // connected
        child.second
    }
}
}