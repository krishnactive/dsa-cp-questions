#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

int main(){
    long long n , k;
    cin>>n>>k;
    vector<int > a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    unordered_map<long long , long long >preExist;
    preExist[0] = 1;
    long long prefix = 0;
    long long ans = 0;
    for(int i = 0;i < n;i++){
        prefix+=a[i];
        ans += preExist[prefix-k];
        preExist[prefix]++;
    }
    cout<<ans;
}