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
vector<int>x={0,0,0};
x[0]=s[0][0]+s[0][1]+s[0][2];
x[1]=s[1][0]+s[1][1]+s[1][2];
x[2]=s[2][0]+s[2][1]+s[2][2];
int r=0;
if(x[0]==x[1]&&x[0]!=x[2]){
    r=2;
}
else if(x[0]==x[2]&&x[0]!=x[1]){
    r=1;
}
else if(x[1]==x[2]&&x[1]!=x[0]){
    r=0;
}
vector<int>y={0,0,0};
y[0]=s[0][0]+s[1][0]+s[2][0];
y[1]=s[0][1]+s[1][1]+s[2][1];
y[2]=s[0][2]+s[1][2]+s[2][2];
int c=0;
if(y[0]==y[1]&&y[0]!=y[2]){
    c=2;
}
else if(y[0]==y[2]&&y[0]!=y[1]){
    c=1;
}
else if(y[1]==y[2]&&y[1]!=y[0]){
    c=0;
}
int h;
if(r==0){
    h=x[1]-x[0]-s[0][c];
}
else if(r==1){
h=x[2]-x[1]-s[1][c];
}
else if(r==2){
h=x[1]-x[2]-s[2][c];
}
if(h<0){
    cout<<-h;
    return 0;
}
else
    cout<<h;
    return 0;

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
