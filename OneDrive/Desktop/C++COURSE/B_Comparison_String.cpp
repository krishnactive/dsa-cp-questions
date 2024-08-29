#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    in{
int n;
cin>>n;
string c;
unordered_set<int>ans;
cin>>c;
ll cn=1;
ans.insert(1);
//vector<int>check;
//check.pb(1);
int i=1,j=1;
for(auto x:c){
  if(x=='>'){
    int ch = *min_element(ans.begin(),ans.end());
    if(c[j]=='<'){

    if(i==ch&&j<n){
        i=ch-1;
        ans.insert(i);
       // i=cn;

    }
    else{
        ans.insert(ch);
        i=ch;
    }
    }
    else{

        if(i==ch){
        i--;
        ans.insert(i);
       // i=cn;

    }
    else{
        i--;
        ans.insert(i);
        //i=cn;
    }
    }
    
  }
  else{

    int ch = *max_element(ans.begin(),ans.end());
    if(c[j]=='<'){
       // if(i==ch){
        i++;
        ans.insert(i);
        //i=cn;
    //}
  }
  else{
    if(i==ch){
        i=ch-1;
        ans.insert(i);
        //i=cn;
    }
    else{
        ans.insert(ch);
          i=ch;
  }
  }
  }
  j++;
  //if(j==n-1) break;
}
cout<<ans.size()<<"\n";

}
return 0;
}
//This is krishna.