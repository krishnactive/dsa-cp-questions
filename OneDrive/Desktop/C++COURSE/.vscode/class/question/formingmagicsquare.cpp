#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'formingMagicSquare' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY s as parameter.
 */

int formingMagicSquare(vector<vector<int>> s) {
int a,b,c,d,e,f,co;
a=s[0][0]+s[0][1]+s[0][2];
b=s[1][0]+s[1][1]+s[1][2];
c=s[2][0]+s[2][1]+s[2][2];
d=s[0][0]+s[1][0]+s[2][0];
e=s[0][1]+s[1][1]+s[2][1];
f=s[0][2]+s[1][2]+s[2][2];
if(a!=d){
    int g=abs(a-d);
    g=abs(s[0][0]-g);
    co+=g;
}
if(a!=e){
    int h=abs(a-e);
    h=abs(s[0][1]-h);
    co+=h;
}
if(a!=f){
    int i=abs(a-f);
    i=abs(s[0][2]-i);
    co+=i;
}
if(b!=d){
    int g=abs(b-d);
    g=abs(s[1][0]-g);
    co+=g;
}
if(b!=e){
    int h=abs(b-e);
    h=abs(s[1][1]-h);
    co+=h;
}
if(b!=f){
    int i=abs(b-f);
    i=abs(s[1][2]-i);
    co+=i;
}
if(c!=d){
    int g=abs(c-d);
    g=abs(s[2][0]-g);
    co+=g;
}
if(c!=e){
    int h=abs(c-e);
    h=abs(s[2][1]-h);
    co+=h;
}
if(c!=f){
    int i=abs(c-f);
    i=abs(s[2][2]-i);
    co+=i;
}
// int d1=s[0][0]+s[1][1]+s[2][2];
// int d2=s[0][2]+s[1][1]+s[2][0];
// if(d1!=d2){
//     int z=abs(d1-d2);
//     z=abs(s[1][1]-z);
//     co+=z;
// }
cout<<co;
return co;
}



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);

    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        string s_row_temp_temp;
        getline(cin, s_row_temp_temp);

        vector<string> s_row_temp = split(rtrim(s_row_temp_temp));

        for (int j = 0; j < 3; j++) {
            int s_row_item = stoi(s_row_temp[j]);

            s[i][j] = s_row_item;
        }
    }

    int result = formingMagicSquare(s);

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
