#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a; 
    cin>>b;
    cout<<a.length()<<" "<<b.length()<<endl<<a+b<<endl;
    string z;
    z[0]=a[0];
    a[0]=b[0];
    b[0]=z[0];
    cout<<a<<" "<<b;
    return 0;
}