#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<pair<int,int>> pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        pq.push({-a,b});
    }
while(!pq.empty()){
    int a = -pq.top().first;
    int b = pq.top().second;
    cout<<a<<" "<<b<<endl;
    pq.pop();
}
}