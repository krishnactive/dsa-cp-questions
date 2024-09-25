#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e7 + 7;
const int INF = LLONG_MAX >> 1;

 int sum(int n)  {
    if(n==0) return 0;
    return sum(n-1) + n;
 }
 

 signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    cout<<sum(5)<<endl;
 }