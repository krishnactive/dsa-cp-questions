#include<bits/stdc++.h>
using namespace std;

int main(){
    int k=3;
    vector<int> a={10, 5, 20, 50, 25, 45, 15};
    auto ok = [&](int m)->bool{
        int cnt = 1;
        int sum = 0;
        for(int i : a){
            if(sum+i>m){
                cnt++;
                sum = i;
            }
            else{
                sum+=i;
            }
        }
        return cnt<=k;
    };

    int ans =-1;
    int l = *max_element(a.begin(), a.end());
    int r = accumulate(begin(a), end(a),0);

    while(l<=r){
        int m = (l+r)/2;
        if(ok(m)){
            ans=m;
            r = m-1;
        }
        else{
            l=m+1;
        }
    }
    cout<<ans<<"\n";
    
}
