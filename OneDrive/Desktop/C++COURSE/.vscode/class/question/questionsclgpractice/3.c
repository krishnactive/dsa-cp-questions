#include<stdio.h>
int main(){
    int n1,n2,i,xyz;
    scanf("%d %d",&n1,&n2);
    for(i=1;i<=n1&&i<=n2;++i){
        if(n1%i==0 && n2%i==0){
        xyz=i;}
    }
    printf("X.Y.Z of %d and %d is %d",n1,n2,xyz);
    return 0;
}