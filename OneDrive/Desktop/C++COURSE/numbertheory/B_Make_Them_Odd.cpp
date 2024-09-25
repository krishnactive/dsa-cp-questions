#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int counting(int n){
    int count=0;
    while(n%2==0){
            n/=2;
            count++;
    }
    return count;
}
int main(){
    in{
        int n;
        cin>>n;
        set<int>even;
        for(int i=0 ; i<n; i++){
            int x;
            cin>>x;
            if(!(x&1)){
                even.insert(-x);
            }
        }
     int count=0;
    while(even.size()){

        int it=*even.begin();
        even.erase(even.begin());

        if(it % 2 == 0) {
            count++;
            even.insert(it/2);
        }
    }
  cout<<count<<"\n";
  

}
return 0;
}
//This is krishna.