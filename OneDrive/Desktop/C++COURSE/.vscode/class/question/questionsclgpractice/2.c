#include<stdio.h>
int main()
{
    int low,high,flag;
    //printf("enter two numbers:");
    scanf("%d %d ",&low,&high);
    while(low<high){
        flag=0;
        for(int i=2;i<=low/2;++i){
            if(low%i==0){
                flag=1;
                break;
            }
        }
    if(flag==0){
        printf("%d",low);
        ++low;
    }
    }
            return 0;

}