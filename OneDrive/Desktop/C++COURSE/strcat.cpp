#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char c1[20]="krishna ";
    char c2[20]="kant";
    strcat(c1,c2);
    cout<<"you full name is "<<c1;
    return 0;
}