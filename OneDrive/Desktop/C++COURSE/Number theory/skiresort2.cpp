// }
//         if(d>=k){
//             d=d-k+1;
//            // int f=fac(d);
//            int f=1;
//             for(int i=1;i<=d;i++){
//                 f=f*i;
//             }
//             cout<<f<<endl;
//         }
//         else{
//             cout<<0<<endl;
//         }
//     }
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, k, q;
//         cin >> n >> k >> q;

//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         int count = 0;
//         int tempCount = 0;

//         for (int i = 0; i < n; i++) {
//             if (a[i] <= q) {
//                 tempCount++;
//             }

//             if (tempCount >= k) {
//                 count += n - i;
//             }
//         }

//         cout << count << endl;
//     }

//     return 0;
// }
