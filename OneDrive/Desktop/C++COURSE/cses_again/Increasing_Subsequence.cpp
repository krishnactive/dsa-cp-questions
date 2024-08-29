#include<bits/stdc++.h>
using namespace std;

int lis(vector<int> const& a) {
    int n = a.size();
    const int INF = 1e9;
    vector<int> d(n+1, INF);
    d[0] = -INF;

    for (int i = 0; i < n; i++) {
        int l = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
        if (d[l-1] < a[i] && a[i] < d[l])
            d[l] = a[i];
    }

    int ans = 0;
    for (int l = 0; l <= n; l++) {
        if (d[l] < INF)
            ans = l;
    }
    return ans;
}


int main(){
    int n ;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    cout<<lis(v);
    return 0;
    int dp[n+1];
    dp[0] = 1;
    map<int,int> candidates;
    candidates[v[0]] = dp[0];
    auto getBestcandidates = [&](map<int,int> &candidates,int v){
        auto it = candidates.lower_bound(v);
        if(it==candidates.begin()) return 0;
        it--;
        return it->second;
    };
    auto insert = [&](map<int,int> &candidates,int v, int adv ){
        if(candidates[v]>=adv) return;
        candidates[v] = adv;
        auto it = candidates.find(v);
        it++;
        while(it!=candidates.end()&&it->second<=adv){
            auto temp = it;
            it++;
            candidates.erase(temp);
        }
    };

    for(int i = 1;i<n;i++){

        dp[i] = 1+ getBestcandidates(candidates ,v[i]);
        insert(candidates, v[i],dp[i]);

    }

    cout<<*max_element(dp, dp+n);
}