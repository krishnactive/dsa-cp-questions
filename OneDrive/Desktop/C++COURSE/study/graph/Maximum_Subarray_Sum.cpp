#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n; cin>>n;
    vector<int>v(n);
    vector<long long > prefix(n+1);
    long long temp=0;
    // prefix.push_back(temp);
    for(int i =0;i<n;i++){
        cin>>v[i];
        // temp+=v[i];
        // prefix.push_back(temp);
        // cout<<temp<<" ";
    }
    // cout<<*max_element(prefix.begin(),prefix.end())-*min_element(prefix.begin(),prefix.end());

long long ans = INT_MIN;
long long sum_maintain = 0;
for(auto &x:v){
    sum_maintain += x;
    if(ans<=sum_maintain){
        ans = sum_maintain;
    }
    if(sum_maintain<0){
        sum_maintain = 0;
    }
}
cout<<ans;

}