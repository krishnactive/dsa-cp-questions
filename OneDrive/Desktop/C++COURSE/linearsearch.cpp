#include<iostream>
using namespace std;
int main(){
    int n=10,A[10],i,key;
    cout<<"Enter number";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter key ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(key==A[i]){
            cout<<"found at "<<i<<endl;
            return 0;
        }
       //return 0;
       // else 
    }
cout<<"not found";
return 0;

}