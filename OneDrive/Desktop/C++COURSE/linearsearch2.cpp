#include<iostream>
using namespace std;
int main(){
    int A[10]={2,4,6,8,12,-3,5,11,9,11};
    int key;
    cout<<"Enter a key to search ";
    cin>>key;
    for(int i=0;i<10;i++){
    if(key==A[i]){
        cout<<"Element found at "<<i;
        exit(0);
    }
}
cout<<"Key not found";
return 0;
}