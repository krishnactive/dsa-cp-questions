#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    in{
        int n;cin>>n;
unordered_set<int>ch;
//vector<int>all;
for(int i=0;i<n;i++ ){
    int x;
    cin>>x;
    ch.insert(x);
}


if(ch.size()>2){
    cout<<n<<"\n";
}
else{
    cout<<n/2+1<<"\n";
}
}
return 0;
}
//This is krishna.