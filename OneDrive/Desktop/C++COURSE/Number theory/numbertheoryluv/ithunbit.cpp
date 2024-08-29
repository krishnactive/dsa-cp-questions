#include<bits/stdc++.h>
using namespace std;
void printBinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);

    }
    cout<<'\n';
}
int main(){
    printBinary(9);
    int a=9;
    int i = 3;
    if((a&(1<<i))!=0){
        cout<<"set bit"<<'\n';
    }
    else{
        cout<<"not set bit\n";
    }
    printBinary( a |( 1<<1));

    printBinary(~a);
}