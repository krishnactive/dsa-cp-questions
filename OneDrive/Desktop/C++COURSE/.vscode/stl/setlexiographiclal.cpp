#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){//0(n)
        string x;
        cin>>x;
        s.insert(x);//0(log(n))

    }
    for(auto value:s){
        cout<<value<<endl;
    }
    return 0;
}