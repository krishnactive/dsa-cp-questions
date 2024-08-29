#include<iostream>
using namespace std;
int power(int a,int n){
    int res=1;
    while(n>0){
        if(n%2)
        res*=a,n--;
        else
        a*=a,n/=2;
    }
    return res;
}
int power1(int s,int m){
    int res=1;
    for(int i=1;i<=m;i++){
        res=res*s;
    }
    return res;
}
int main(){
    int a,b;
    cin>>a>>b;
    //cin>>b;
    cout<<power(a,b)<<endl;
    cout<<power1(a,b);
    return 0;
}