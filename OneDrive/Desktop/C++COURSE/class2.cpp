#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    int area()
{
    return length*breadth;
}
int perimeter()
{
    return 2*(length+breadth);
}
};
int main() //object creation in main 
{
    Rectangle r1,r2;
    r1.length=10;
    r1.breadth=5;
    cout<<"Area is "<<r1.area()<<endl;
    cout<<"perimeter is "<<r1.perimeter()<<endl;

    r2.length=50;
    r2.breadth=30;
    cout<<"Area is "<<r2.area()<<endl;
    cout<<"perimeter is "<<r2.perimeter()<<endl;
}