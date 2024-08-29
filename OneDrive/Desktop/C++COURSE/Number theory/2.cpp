// #include <iostream>
// #include<string>
// using namespace std;
// string isPrime(int n){
//     if(n==1) return "yes";
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0)
//             return "yes";
//     }
//     return "no";
    
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
// 	int n;
// 	cin>>n;
// 	cout<< isPrime(n)<<endl;
	
// }
// return 0;}

#include <iostream>
#include<string>
using namespace std;
bool isPrime(int n){
    if(n==1) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return true;
    }
    return false;
    
}

int main() {
    int t;
    cin>>t;
    while(t--){
	int n;
	cin>>n;
    if(isPrime(n))
	{
        cout<<"yes"<<endl;
    }
    else 
    {
        cout<<"no"<<endl;
    }
	
}
return 0;}
