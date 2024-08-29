#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



void kaprekarNumbers(int p, int q) {
    using namespace boost::multiprecision;
     vector<int>BigInt vec;
       for(int i=p;i<=q;i++){
       cpp_int j=i*i;
       string d=to_string(j);
       int l=d.size();
       int lent=l-l/2;
       cpp_int po=pow(10,lent);
       cpp_int n=j/po;
       cpp_int m=j%po;
       if(i==n+m){
        vec.push_back(i);
       }
       }
    for(int dd=0;dd<vec.size();dd++){
        cout<<vec[dd]<<" ";
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
