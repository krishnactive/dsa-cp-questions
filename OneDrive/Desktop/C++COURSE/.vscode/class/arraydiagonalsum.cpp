#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[100][100];
    int n,sum=0,sum2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ar[i][j];  
            if(i+j==(n-1)){
                sum2=sum2+ar[i][j];
            }
            
        //cout<<endl;
        }
        for(int j=0;j<n;j++){  
            if(i==j){
            sum=sum+ar[i][j];
            }
        
    }
    }
    if (sum>sum2){
    cout<<sum-sum2;
    }
    else{
        cout<<sum2-sum;
    }
    return 0;
}
