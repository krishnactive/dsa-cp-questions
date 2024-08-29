#include<iostream>
using namespace std;
int x=10;
int main()
{
    int x=20;
    {
        int x=3;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cout<<::x<<endl;//to print global value of x
}