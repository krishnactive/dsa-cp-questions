#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
set<int>s;
    in{
        int x;
        cin>>x;
        s.insert(x);

}
if(s.size()>1) {
    auto it = s.begin();
    it++;
    cout<<*it<<endl;
    }
    else cout<<"NO\n";
return 0;
}
