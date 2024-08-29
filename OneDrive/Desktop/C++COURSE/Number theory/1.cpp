#include<iostream>
using namespace std;
// unsigned long long factorial(int n)
// {
// 	const unsigned int M = 1000000007;
// 	unsigned long long f = 1;

// 	for (int i = 1; i <= n; i++)
// 		f = f * i; // WRONG APPROACH as
// 					// f may exceed (2^64 - 1)

// 	return f % M;
// }
// int main(){
//     long long n;
//     cin>>n;
//     cout<<factorial(n);
//     return 0;
// }

// // This code is contributed by Shubham Singh
unsigned long long factorial(int n)
{
	const unsigned int M = 1000000007;

	unsigned long long f = 1;
	for (int i = 1; i <= n; i++)
		f = (f*i) % M; // Now f never can
						// exceed 10^9+7
	return f;
}
int main(){
    long long n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}

// This code is contributed by Shubham Singh


