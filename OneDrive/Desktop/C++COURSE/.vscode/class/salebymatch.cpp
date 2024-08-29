// #include <bits/stdc++.h>

// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);
// vector<string> split(const string &);

// /*
//  * Complete the 'sockMerchant' function below.
//  *
//  * The function is expected to return an INTEGER.
//  * The function accepts following parameters:
//  *  1. INTEGER n
//  *  2. INTEGER_ARRAY ar
//  */

// int sockMerchant(int n, vector<int> ar) {
//     vector<int>s;
// for(int i=0;i<ar.size();i++){
//     for(int j=i+1;j<ar.size();j++){
//         if(ar[i]==ar[j]){
//             s.push_back(ar[i]);
//             ar.erase(ar.begin()+i-1);
//             ar.erase(ar.begin()+j-1); 
//             //break;      
//         }
        
//     }
// }
// cout<<s.size();
// //return s.size();
// return 0;
// }

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     string n_temp;
//     getline(cin, n_temp);

//     int n = stoi(ltrim(rtrim(n_temp)));

//     string ar_temp_temp;
//     getline(cin, ar_temp_temp);

//     vector<string> ar_temp = split(rtrim(ar_temp_temp));

//     vector<int> ar(n);

//     for (int i = 0; i < n; i++) {
//         int ar_item = stoi(ar_temp[i]);

//         ar[i] = ar_item;
//     }

//     int result = sockMerchant(n, ar);

//     fout << result << "\n";

//     fout.close();

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

// vector<string> split(const string &str) {
//     vector<string> tokens;

//     string::size_type start = 0;
//     string::size_type end = 0;

//     while ((end = str.find(" ", start)) != string::npos) {
//         tokens.push_back(str.substr(start, end - start));

//         start = end + 1;
//     }

//     tokens.push_back(str.substr(start));

//     return tokens;
// }
//complexicity of above code is o(n^2)
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */

int sockMerchant(int n, vector<int> ar) {
unordered_map<int,int>se;
for(int i=0;i<n;i++){
    se[ar[i]]++;
}
int sum=0;
for(auto x:se){
    sum=sum+x.second/2;
}
cout<<sum;
return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string ar_temp_temp;
    getline(cin, ar_temp_temp);

    vector<string> ar_temp = split(rtrim(ar_temp_temp));

    vector<int> ar(n);

    for (int i = 0; i < n; i++) {
        int ar_item = stoi(ar_temp[i]);

        ar[i] = ar_item;
    }

    int result = sockMerchant(n, ar);

    fout << result << "\n";

    fout.close();

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
//complexicity of this code is o(nlogn)
// The time complexity of the sockMerchant function in the above code is O(nlogn) due to the use of std::map, which has a worst-case time complexity of O(logn) for insertion and searching operations. The function first creates a map to count the frequency of each element in the input array ar, which takes O(nlogn) time complexity due to the map operations. Then it iterates over the map to count the number of pairs of socks, which takes O(nlogn) time complexity due to the iteration and division operation. Therefore, the overall time complexity of the sockMerchant function is O(nlogn).
// and if you use unordered_map the time complexity is o(n)