// //  #include<bits/stdc++.h>
// //  using namespace std;
// //  int main(){
// // int p,q;
// // cin>>p;
// // cin>>q;
 
// //  vector<int>x;
// //        for(int i=p;i<=q;i++){
// //        int k=i;
// //        long long j=i*i;
// //        string d=to_string(k);
// //        int l=d.length()-d.length()/2;
// //        long long n=j/(10*l);
// //        long long m=j%(10*l);
// //        if(n+m==i){
// //         x.push_back(i);
// //        }
// //        }
    
    
// //     for(auto &o:x){
// //         cout<<o<<" ";
// //     }
// //     return 0;
// //     }
// #include <bits/stdc++.h>

// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);

// /*
//  * Complete the 'kaprekarNumbers' function below.
//  *
//  * The function accepts following parameters:
//  *  1. INTEGER p
//  *  2. INTEGER q
//  */

// void kaprekarNumbers(int p, int q){
//      vector<int>x;
//        for(int i=p;i<=q;i++){
//        long long j=i*i;
//        string d=to_string(j);
//        int l=d.size()-d.size()/2;
//        long long p=pow(10,l);
//        long long n=j/pow(10,l);
//        long long m=j%p;
//        if(n+m==i){
//         x.push_back(i);
//        }
//        }
//     for(auto &o:x){
//         cout<<o<<" ";
//     }
// }

// int main()
// {
//     string p_temp;
//     getline(cin, p_temp);

//     int p = stoi(ltrim(rtrim(p_temp)));

//     string q_temp;
//     getline(cin, q_temp);

//     int q = stoi(ltrim(rtrim(q_temp)));

//     kaprekarNumbers(p, q);

//     return 0;
// }

// string ltrim(const string &str) {
//     string s(str);

//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//     );

//     return s;
// }

// string rtrim(const string &str) {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end()
//     );

//     return s;
// }
// // 1 9 45 55 99 297 703 999 2223 2728 4950 5050 7272 7777 9999 17344 22222     77778 82656 95121 99999
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

void kaprekarNumbers(int p, int q){
     vector<int>x;
       for(int i=p;i<=q;i++){
       long long j=i*i;
       string d=to_string(i*i);
       int l=d.length()-d.length()/2;
       long long p=pow(10,l);
       long long n=i*i/pow(10,l);
       long long m=(i*i)%p;
       if(n+m==i){
        x.push_back(i);
       }
       }
    if(x.size()!=0){   
    for(auto &o:x){
        cout<<o<<" ";
    }}
    else{
        cout<<"INVALID RANGE";
    }
}

int main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
