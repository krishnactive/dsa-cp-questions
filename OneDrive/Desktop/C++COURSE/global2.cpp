#include<iostream>
using namespace std;
int g=5;
void fun()
{
int g=10;
{
    int g=0; //now become local for void
    g++;
    cout<<g<<endl;
}
cout<<g<<endl;
}
int main() 
{
    cout<<g<<endl;
    fun();
    cout<<g<<endl;//now it will print global value of g with any change by void on g because g is locally defined in void.
}