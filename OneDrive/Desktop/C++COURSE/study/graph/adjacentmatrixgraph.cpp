#include<bits/stdc++.h>
using namespace std;

//edges maximum value  lets say it is give as 1e3;
const int N =1e3+10;
int graph[N][N]; 


//adjacency matrix space comp is very high ie of o(n^2)
// if N = 10^6 matrix of 10^6 X 10^6 is not possible
// maximum of 10^3 is possible 


int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int v1,v2;
        cin >> v1 >>v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
}