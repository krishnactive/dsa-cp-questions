#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k;
    cin>>k;
    long long e=k/2;
    long long o=e;
    if(k%2!=0){
        o=e+1;
    }
    long long esum=e*(e+1);
    long long osum=(long long)((o)*(1+(o-1)));
    cout<<esum-osum;
    return 0;
}