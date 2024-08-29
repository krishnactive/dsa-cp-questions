#include<iostream>
using namespace std;
template<class T>
T maq(T x,T y)
{
    if (x>y)
        return x;
    else
        return y;
}
 int main(){
    cout<<maq(12,13);
    return 0;
}