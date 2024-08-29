#include<iostream>
using namespace std;
int g=5;
void fun()
{
int a=10;
a++;
g++;
cout<<a<<" "<<g<<endl;//11 6
}
int main()//first main fuction works and calling of fun function occur
// through main function only if main function not call fun functinon then fun function will not come do you get it;
{

    cout<<g<<endl;//5 
    fun();
    cout<<g<<endl;//6
}