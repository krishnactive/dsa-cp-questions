#include<iostream>
using namespace std;
void primefact(int n){
    for(int i=2;i*i<=n;i++)
    if(n%i==0){
        int cnt=0;
        while(n%i==0)
        cnt++,n/=i;
        cout<<i<<"^"<<cnt<<endl;
    }
    if(n>1){
        cout<<n<<"^"<<1<<endl;
    }
}
int main(){
    int a;
    cin>>a;
    primefact(a);
    return 0;
}