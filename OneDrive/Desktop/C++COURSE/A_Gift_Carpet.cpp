#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    in{
int n,m;
cin>>n>>m;
//if(m<4) cout<<"NO\n";
//else{
    vector<string>ss;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        ss.pb(s);
    }
    vector<string>ne;
    int k=0;
for(int i=0;i<m;i++){
    int j=0;
    string y;
    
    for( j=0;j<n;j++){
        string x=ss[j];
        auto it=x.begin()+i;
        y.pb(*it);
    }
    ne.pb(y);
    k++;
}
int count=0;
 bool v=true,ii=false,kk=false,a=false;
for(auto x:ne){
    int i=0;
    
    for(i=0;i<n;i++){
        auto it=x.begin()+i;
        
         if(*it=='v'&&v){
            count++;
            v=false;
            ii=true;
      break;
          
        }
        else if(*it=='i'&&ii){
            count++;
            ii=false;
            kk=true;
    break;
        }
       else if(*it=='k'&&kk){
            count++;
            kk=false;
            a=true;
        break;
        }
       else if(*it=='a'&&a){
            count++;
            a=false;
        break;
        }
        if(count==4){
            break;
        }
    }
if(count==4){
            break;
        }

    }

if(count==4) cout<<"YES\n";
else cout<<"NO\n";

//}
}


return 0;
}
//This is krishna.