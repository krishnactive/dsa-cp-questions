#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {   int count=0;
        int a ,b;
        cin>>a>>b;
        for(int i=a;i<=b;i++){
            int r=sqrt(i);
            if(i%r==0){
                count++;
            }
        }
        cout<<count<<endl;
    }
   return 0; 
}