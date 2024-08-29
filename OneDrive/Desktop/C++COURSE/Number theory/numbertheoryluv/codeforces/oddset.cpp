#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int odd=0,even=0;
        for(int i=1;i<=2*n;i++){
            int x;
            cin>>x;
            if(x%2!=0){
                odd++;
            }
            else if(x%2==0)
                    even++;
            }
   
    if(odd==even){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    }
    return 0;
    }