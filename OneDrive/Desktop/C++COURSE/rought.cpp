// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 0; i < 100000; i++) {
//         cout << 1 << " ";
//     }
//     cout << endl;

//     return 0;
// }
// C++ program to demonstrate
// working of string.find()
#include <iostream>
#include <string>
using namespace std;

// Driver code
int main()
{
string str = "geeksforgeeks a computer science";
string str1 = "geks";

// Find first occurrence of "geeks"
size_t found = str.find(str1);
if (found != string::npos)
	cout << "First occurrence is " <<
			found << endl;

// Find next occurrence of "geeks".
// Note here we pass
// "geeks" as C style string.
char arr[] = "geks";
found = str.find(arr, found+1);
if (found != string::npos)
	cout << "Next occurrence is " <<
			found << endl;
return 0;
}
