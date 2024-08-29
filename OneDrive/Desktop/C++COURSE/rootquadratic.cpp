#include<iostream>
#include<cmath>
//using namespace std;
int main(){
    float a,b,c,root1,root2;
    std::cout<<"Quadratic eq is ax^2+bx+c";
    std::cout<<"enter value of a,b,c:";
    std::cin>>a>>b>>c;
if(b*b>=4*a*c)
    {
    root1=(-b+sqrt(b*b-4*a*c))/(2*a);
    root2=(-b-sqrt(b*b-4*a*c))/(2*a);
    std::cout<<"roots are "<<root1<<","<<root2<<std::endl;
    }
/*else if(b*b<4*a*c)
    {
    float d=-b*b+4*a*c;
    std::cout<<"roots are "<<"-"<<b/2<<"+"<<root2;
    }*/
else{
    std::cout<<"complex roots exists";
}
    return 0;

}