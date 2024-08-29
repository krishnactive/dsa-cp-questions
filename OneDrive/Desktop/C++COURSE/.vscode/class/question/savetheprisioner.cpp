#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int saveThePrisoner(int n, int m, int s) {
vector<long long>g;
// for (long long i=s,j=1;j<=m;i++,j++){
//     if(i>n){
//         i=i-n;
//         g.push_back(i);
//     }
//     else g.push_back(i);   
// }
// //cout<<g[m-1];
// return g[m-1];
int i=s; 
while(s<=m){

}
}

int main()
{
    int t;
    //cout << "Enter the number of test cases: ";
    cin >> t;

    ofstream fout(getenv("OUTPUT_PATH"));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n, m, s;
        cout <<  t_itr+1 << endl;
        //cout << "Enter the number of prisoners: ";
        cin >> n;
        //cout << "Enter the number of sweets: ";
        cin >> m;
        //cout << "Enter the chair number to start distributing sweets from: ";
        cin >> s;

        int result = saveThePrisoner(n, m, s);

        fout << result << "\n";
    }

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
