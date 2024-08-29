#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long n,k,g;
    cin>>n>>k>>g;
    long long save=min((n-1)*(g-1)/2,k*g);
    long long rem=k*g-save;
    if(rem>=(g+1)/2)
    save-=g-rem;
    else
    save+=rem;
    cout<<save<<'\n';}
return 0;
}