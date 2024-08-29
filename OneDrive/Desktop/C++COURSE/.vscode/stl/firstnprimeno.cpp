/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,count=1,count1=0,num=1;
    cin>>N;
    while(count<=N){
        for(int i=1;i<=num/2;i++){
            if(num%i==0){
                count1++;
            }
        }
        if(count1==1){
            cout<<num<<endl;
            count++;
        }
        num++;
    }
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=10,count=0,num=1;
    while(count<n){
        //for(int i=1;i<=n;i++){
            int count1=0;
            for(int j=1;j<=num/2;j++){
                if(num%j==0){
                    count1++;
                }
            }
            if(count1==1){
            cout<<num<<endl;
            count++;
        }
        num++;
        }

        //return 0;
    //}
    
}
