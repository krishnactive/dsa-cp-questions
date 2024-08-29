#include<bits/stdc++.h>
using namespace std;
int getTotalX(vector<int> a, vector<int> b) {
int m,n,count=0;
cin>>m>>n;
for(int i=0;i<m;i++){
    int x;
    cin>>x;
    a.push_back(x);
}
for(int i=0;i<n;i++){
    int x=0;
    cin>>x;
    b.push_back(x);
    if(b[i]%a[i]==0){
        count++;
    }
}
return count;
}
int main(){
    vector<int>a,b;
    cout<<getTotalX(a,b);
    return 0;
}