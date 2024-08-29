# include<iostream>
using namespace std;
    
/*program for function with arguements

*/
float add(float x,float y)
{
	float z;
	z=x+y;
	return z;
}
int main()
{
	float x=10,y=5,z;
	z=add(x,y);
	cout<<z<<endl;
	return 0;
}