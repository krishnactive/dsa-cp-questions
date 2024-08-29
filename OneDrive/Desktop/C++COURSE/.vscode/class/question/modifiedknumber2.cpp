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

void kaprekarNumbers(int p, int q) {
    vector<int> z;
    for(int i = p; i <= q; i++){
        long long n = 1LL * i * i; // use long long to prevent overflow
        string v = to_string(n);
        int t = v.size() / 2;
        string f = v.substr(0, t);
        int c = stoi(v.substr(t));
        int d = (t == 0) ? 0 : stoi(f);
        if(c + d == i) {
            z.push_back(i);
        }
    }
    if(z.size() == 0) {
        cout << "INVALID RANGE\n";
    } else {
        for(auto x : z) {
            cout << x << " ";
        }
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
