// #include <bits/stdc++.h>

// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);
// vector<string> split(const string &);

// /*
//  * Complete the 'divisibleSumPairs' function below.
//  *
//  * The function is expected to return an INTEGER.
//  * The function accepts following parameters:
//  *  1. INTEGER n
//  *  2. INTEGER k
//  *  3. INTEGER_ARRAY ar
//  */

// int divisibleSumPairs(int n, int k, vector<int> ar) {
// int count=0;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if(i!=j){
//             if((ar[i]+ar[j])%k==0){
//                 count++;
//             }
//         }
//     }
// }
// //cout<<count;
// return 0;
// }

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     string first_multiple_input_temp;
//     getline(cin, first_multiple_input_temp);

//     vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

//     int n = stoi(first_multiple_input[0]);

//     int k = stoi(first_multiple_input[1]);

//     string ar_temp_temp;
//     getline(cin, ar_temp_temp);

//     vector<string> ar_temp = split(rtrim(ar_temp_temp));

//     vector<int> ar(n);

//     for (int i = 0; i < n; i++) {
//         int ar_item = stoi(ar_temp[i]);

//         ar[i] = ar_item;
//     }

//     int result = divisibleSumPairs(n, k, ar);

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
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int migratoryBirds(vector<int> arr) {
int c=0;
map<int,int>s;
for(int i=0;i<arr.size();i++){
      s[arr[i]]++;
      }
int z=0,a=0;

for(auto pr:s){
    if(pr.second>z){
        z=pr.second;
        a=pr.first;
    }

}


     
return a;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = migratoryBirds(arr);

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
