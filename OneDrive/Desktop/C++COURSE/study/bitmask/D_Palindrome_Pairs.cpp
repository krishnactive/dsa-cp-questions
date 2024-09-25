// #include<bits/stdc++.h>
// using namespace std;

// # define fastio      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// # define ll long long
// # define lld long double
// # define pb push_back 
// # define vi vector<int>
// # define vc vector<char>
// # define vl vector<ll>
// # define ump unordered_map
// # define uset unordered_set
// # define mset multiset
// # define minA(v) *min_element(v.begin(),v.end())
// # define maxA(v) *max_element(v.begin(),v.end())
// # define st(v) sort(v.begin(),v.end())
// # define fin for(int i=0;i<n;i++)
// # define in int t; cin>>t; while(t--)

// auto solve(){



// }


// int main(){
// 	   fastio    
//     #ifndef ONLINE_JUDGE 
//         freopen("input1.txt", "r", stdin);
//         freopen("output1.txt", "w", stdout);
//     #endif
//     in{

// 	solve();



// }
// return 0;
// }
// //This is krishna.


#include <iostream>

int main() {
    // Define two binary numbers
    int a = 0b101010; // 42 in decimal
    int b = 0b110110; // 54 in decimal

    // Perform addition modulo 2 (XOR) on each bit
    int result = a ^ b;

    // Display the results in decimal
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "a ⊕ b: " << result << std::endl;
std::cout<<(54+42)%2;
    return 0;
}

