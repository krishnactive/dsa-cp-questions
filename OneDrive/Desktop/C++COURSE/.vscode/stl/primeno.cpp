#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=10;
    //while(n--){
        for(int i=1;i<=n;i++){
            int count1=0;
            for(int j=1;j<=i/2;j++){
                if(i%j==0){
                    count1++;
                }
            }
            if(count1==1){
            cout<<i;
        }
        }
        return 0;
    //}
    
}