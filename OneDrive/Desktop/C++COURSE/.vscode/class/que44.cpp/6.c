#include<stdio.h>
/*int main()
{
    char x;
    printf("Enter a character ");
    scanf("%c",&x);
    printf("ASCII value of %c is %d",x,x);
    return 0;
}*/
int main()
{
    char x;
    printf("Enter a capital letter ");
    scanf("%c",&x);
    x=x+32;
    printf("Small letter is %c",x);
    return 0; 
}