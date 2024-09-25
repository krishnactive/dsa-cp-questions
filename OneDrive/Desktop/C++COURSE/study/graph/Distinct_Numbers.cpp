#include<iostream>
using namespace std;
#include<unordered_set>
#include<vector>
#include<algorithm>

int main(){
    int n;
    cin>>n;
    vector<int>s;
    for(int i =0 ;i<n;i++){
        int x;
        cin>>x;
        s.push_back(x);
    }
sort(s.begin(),s.end());
int ans =1;
for(int i=1;i<n;i++){
    if(s[i-1]!=s[i])ans++;
}
    cout<<ans;
}