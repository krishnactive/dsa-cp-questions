#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
while(t--)
{
    int n;
    cin>>n;
if(n==2){
    
}


    int k=n;
    int tt= ceil(n/2);
    int ttt=tt;
    int i=1;
    while(tt--){
        cout<<"1 "<<1<<"\n";
    }
    int to=n-tt-1;
    int ty=n;
    while(to--){
        cout<<ty<<" "<<ty<<"\n";
    }
    cout<<ceil(ttt/2)<<" "<<n-1<<"\n";
}
return 0;
}