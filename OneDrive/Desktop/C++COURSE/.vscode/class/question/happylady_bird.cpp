#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



string hk(string b) {
unordered_map<char,int>s;
int count1=0;
sort(s.begin(),s.end());
for(int i=0;i<b.length();i++){
    if(s[i]=='_'){
        count1++;
    }
}
if(count1>0){
for(int j=0;j<s.size()-count1;j++){
    s[b[j]]++;
}
int count2=0;
for(auto x:s){
    if(x.second==1){
        count2++;
    }   
}
if(count2==0){
    return "YES";
}
else{
    return "NO";
}
}
else{
    vector<int>g;
    int f=0;
    for(int k=0;k<b.length()-1;k++){
        if(b[k]==b[k+1]){
            g[f]++;
        }
        else{
            f++;
        }
    }
    int count3=0;
    for(int h=0;h<g.size();h++){
        if(g[h]<2){
            count3++; 
        }
    }
    if(count3<2){
        return "NO";
    }
    else{
        return "YES";
    }
}

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string g_temp;
    getline(cin, g_temp);

    int g = stoi(ltrim(rtrim(g_temp)));

    for (int g_itr = 0; g_itr < g; g_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string b;
        getline(cin, b);

        string result = hk(b);

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
