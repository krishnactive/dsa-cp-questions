#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>charge;
        int neg=0;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            if(x<=0) neg++;

            charge.push_back(x);
        }
        int hj=charge.size()-1,ii=0;
        if(charge.size()!=1&&neg!=n)
        while(charge[0]<0){
            auto iti = charge.begin();
            charge.erase(iti);  
        }
        if(charge.size()!=1&&neg!=n)
        while(charge[charge.size()-1]<0){
            auto itii = charge.end()-1;
            charge.erase(itii);    
        }
        if(neg+1==n){
          cout<<*max_element(charge.begin(),charge.end());
        }
        else{
        while(charge.size()>1){
            long long m=*min_element(charge.begin(),charge.end());
            for(int i=0;i<charge.size();i++){ 
                if(charge[0]==m&&m>=0){
                    for(int j=1;j<charge.size()-1;j++){
                        if(charge[j]==m){
                            i=j;
                            break;
                        }
                }}
                if(charge[i]==m){
                    if(i==0||i==charge.size()-1){
                        auto it = charge.begin()+i;
                        charge.erase(it);
                        break;
                    }
                    else{
                        auto it = charge.begin()+i;
                        charge.erase(it);
                        charge[i-1]+=charge[i];
                        auto iit = charge.begin()+i;
                        charge.erase(iit);
                        break;

                    }
                }
              
            }
             
            
        }
        cout<<charge[0]<<'\n';
        }
    }
    return 0;
}