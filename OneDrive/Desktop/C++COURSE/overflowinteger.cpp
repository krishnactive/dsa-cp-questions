#include<iostream>
#include<limits>
using namespace std;
int main()
{
    int e =numeric_limits<int>::min();
 e--;
 cout<<(int)e<<endl;
return 0;
}