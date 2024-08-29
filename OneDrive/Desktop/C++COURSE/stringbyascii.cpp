#include<iostream>
using namespace std;
int main()
{
    char s[]={65,66,67,68,69,0,66,65,'\0'};
    cout<<s;
}
//here '\0' and 0 are same i.e null character or string delimiter
//print up to 0 or '\0'