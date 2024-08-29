#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=i;j<=x;j++){
            if(j!=x){
                printf(" ");
            }
            else{
                for(int k=1;k<=2*i-1;k++){
                    printf("*");
                }
            }
        }
        printf("\n");
    }
    return 0;
}