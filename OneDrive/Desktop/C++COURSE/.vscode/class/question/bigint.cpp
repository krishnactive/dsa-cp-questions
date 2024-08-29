// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     vector<int>a;
// //     int j=0;
// //     a.push_back(1);
// //     for(int i=1;i<=n;i++){
// //         for(int j=0;j<a.size();j++){
// //         if(a[j]<10){
// //             a[j]*=i;
// //         }
// //         else if(a[j]>=10){
// //             int temp=a[j];
// //             a[j]=a[j]%10;
// //             a.push_back(temp/10);
// //             //j++;
// //         }
// //     }}
// // for(int k=a.size()-1;k>=0;k--){
// //     cout<<a[k];
// // }
// // return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> a;
//     a.push_back(1);
//     int f=0;
//     int ca=0;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 0; j < a.size()+f; j++){
//             if (a[j] < 10){
//                 a[j] *= i;
//                 if(a[j]>10){
//                     string ss=to_string(a[j]);
//                     f=ss.size();
//                 }
//             } 
//             else if (a[j-1] >= 10) {
//                 int d=a[j-1];
//                 while(d>0){
//                 int temp = a[j-1]+ca;
//                 a[j-1] = a[j-1] % 10;
//                 a.push_back(temp / 10+a[j]);
//                 ca=d/10;
//                 d/=10;
//             }}
//         }
//     }

//     for (int k = 0; k < a.size(); k++) {
//         cout << a[k]<<endl;
//     }
//     return 0;
// }
// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // int main() {
// //     int n;
// //     cin >> n;
// //     vector<int> a;
// //     a.push_back(1);
// //     int f=0;

// //     for (int i = 1; i <= n; i++) {
// //         for (int j = 0; j < a.size()+f; j++) {
// //             if (a[j] < 10) {
// //                 a[j] *= i;
// //                 string s=to_string(a[j]);
// //                 f=s.size();
// //             } else if (a[j-1] >= 10) {
// //                 int temp = a[j-1];
// //                 a[j-1] = a[j-1] % 10;
// //                 a.push_back(temp / 10);
// //             }
// //         }
// //     }

// //     for (int k = a.size() - 1; k >= 0; k--) {
// //         cout << a[k]<<endl;
// //     }
    
// //     return 0;
// // }
// #include <iostream>
// #include <vector>
// #include <boost/multiprecision/cpp_int.hpp>

// using namespace std;
// using boost::multiprecision::cpp_int;

// int main() {
//     int n;
//     cin >> n;
//     vector<cpp_int> a;
//     a.push_back(1);

//     for (int i = 1; i <= n; i++) {
//         for (int j = 0; j < a.size(); j++) {
//             if (a[j] < 10) {
//                 a[j] *= i;
//             } else if (a[j] >= 10) {
//                 cpp_int temp = a[j];
//                 a[j] = a[j] % 10;
//                 a.push_back(temp / 10);
//             }
//         }
//     }

//     for (int k = a.size() - 1; k >= 0; k--) {
//         cout << a[k];
//     }
    
//     return 0;
// }
// #include <iostream>
// #include <vector>

// using namespace std;

// class BigInt {
// private:
//     vector<int> digits;

// public:
//     BigInt() {
//         digits.push_back(0);
//     }

//     BigInt(int num) {
//         while (num > 0) {
//             digits.push_back(num % 10);
//             num /= 10;
//         }
//     }

//     void multiply(int num) {
//         int carry = 0;
//         for (int i = 0; i < digits.size(); i++) {
//             int product = digits[i] * num + carry;
//             digits[i] = product % 10;
//             carry = product / 10;
//         }

//         while (carry > 0) {
//             digits.push_back(carry % 10);
//             carry /= 10;
//         }
//     }

//     void print() {
//         for (int i = digits.size() - 1; i >= 0; i--) {
//             cout << digits[i];
//         }
//     }
// };

// int main() {
//     int n;
//     cin >> n;

//     BigInt factorial(1);

//     for (int i = 1; i <= n; i++) {
//         factorial.multiply(i);
//     }

//     factorial.print();

//     return 0;
// }
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> factorial;
    factorial.push_back(1);

    for (int i = 2; i <= n; i++) {
        int carry = 0;
        for (int j = 0; j < factorial.size(); j++) {
            int product = factorial[j] * i + carry;
            factorial[j] = product % 10;
            carry = product / 10;
        }

        while (carry > 0) {
            factorial.push_back(carry % 10);
            carry /= 10;
        }
    }

    for (int i = factorial.size() - 1; i >= 0; i--) {
        cout << factorial[i];
    }

    return 0;
}
