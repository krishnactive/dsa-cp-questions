#include<iostream>
using namespace std;
class rational
{
private:
    int num;
    int den;
public:
    rational(int p=0,int q=1 )
    {
        num=p;
        den=q;
    }
    void display()
    {
    cout<<num<<"/"<<den<<endl;
    }
    friend rational operator+(rational r1,rational r2);
    //friend ostream &operator<<(ostream &out,rational&r3);
};
rational operator+(rational r1,rational r2)
{
    rational temp;
    temp.num=r1.num*r2.den+r2.num*r1.den;
    temp.den=r1.den*r2.den;
    return temp;
}
//ostream &operator<<(ostream &out,rational r3)
//{
//    out<<r3.num<<"/"<<r3.den<<endl;
//    return out;
//}
int main()
{
    rational r1(5,4),r2(2,5),r3;
    r3=r1+r2;
    r3.display();
    //operator<<(cout,r3);
    return 0;
} 