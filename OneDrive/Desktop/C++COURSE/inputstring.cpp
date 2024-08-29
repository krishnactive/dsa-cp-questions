#include <iostream>
using namespace std;
int main()
{
    char s[20];
    cout<<"Enter your name ";
    cin.getline(s,20);
    //cin.get(s,20);
    cout<<"Welcome "<<s<<endl;
    return 0;
}
//upto twenty alphabet it will print or to any specified lenght