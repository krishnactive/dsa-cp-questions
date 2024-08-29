#include<iostream>
using namespace std;

class Rectangle 
{
private:
    int length;
    int breadth;
public:
    Rectangle();// non parametrised constructors
    Rectangle(int l, int b);//parametrised
    Rectangle(Rectangle &r);//copy
    int getLength(){return length;}//inline accessor
    int getBreadth(){return breadth;}//inline accessor
    void setLength(int l);//mutator
    void setBreadth(int b);
    int area();//facilator
    int perimeter();
    bool isSquare();//enquiry
    ~Rectangle();//destructor clearance
};

int main()
{
    Rectangle r1(10,10);
    cout<<"Area"<<r1.area()<<endl;
    if(r1.isSquare())
        cout<<"Yes"<<endl;
    return 0;
}
Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;;
    breadth=r.breadth;
}
void Rectangle::setLength(int l)
{
    length=l;
}
void Rectangle::setBreadth(int b)
{
    breadth=b;
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
bool Rectangle::isSquare()
{
    return length==breadth;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle is destroyed";
}
