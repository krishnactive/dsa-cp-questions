#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int>d(n);
    for(int i=0;i<n;i++){
        cin>>d[i];
        
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        int ans=lower_bound(d.begin(),d.end(),x)-d.begin();
        if(x!=ans)cout<<"Yes ";
        else cout<<"No ";
        cout<<ans+1<<endl;
    }
    return 0;
}
