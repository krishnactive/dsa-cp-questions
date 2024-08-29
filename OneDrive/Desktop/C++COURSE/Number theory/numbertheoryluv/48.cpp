#include<bits/stdc++.h>
using namespace std;
void printBinary(int num){
    for(int i=9;i>=0;--i){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main(){
    printBinary(89); 
    int a=9;
    int i=0;
    for(int i=0;i<=9;i++){
    if((a&(1<<i))!=0){
        cout<<"set bit";
    }
    else{
        cout<<"not set bit";
    }}
}