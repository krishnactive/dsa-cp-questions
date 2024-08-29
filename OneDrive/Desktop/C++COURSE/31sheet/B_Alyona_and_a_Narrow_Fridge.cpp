#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int a[N];
int b[N];
int main(){
    int n,h;
    cin>>n>>h;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    auto ok = [&](int mid)-> bool{
        copy(a,a+mid,b);
        sort(b,b+mid,greater<int>());
        long long ad = 0;
        for(int i =0;i<mid;i+=2){
           ad += b[i];   
        }
        if(ad<=h)return true;
        return false;
    };

    int hi = n;
    int lo = 0;
    int ans = 0;
    while(hi>=lo){
        int mid = hi-(hi-lo)/2;
        if(ok(mid)){
            ans = mid;
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    cout<<lo;

}