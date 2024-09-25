#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    in{
        string n;
        cin>>n;
        
        // n.insert(0,1,'0');
        // cout<<n<<'\n';
        int p=0;
        for(int i = n.size()-1 ; i >= 0 ; i--){
            if(n[i]>='5'){
                p++;
                n[i]='0';
                for(int j = i-1; j>=0 ; j--){
                    if(n[j]>=5){
                        n[j]=0;
                        i++;
                        p++;
                        break;
                    }

                }
            }
        }


}
return 0;
}
//This is krishna.