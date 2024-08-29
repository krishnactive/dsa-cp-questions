#include<iostream>
int su=0;
int sum(int a){
    su+=a%10;
    a=a/10;
    if(a==0){
        return su;
    }
    sum(a);
}
int main(){
    int t;
    scanf("%d" ,&t);
    printf("%d",sum(t));
    return 0;
}