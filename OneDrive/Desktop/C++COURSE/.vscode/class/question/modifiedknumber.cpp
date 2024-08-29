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
    vector<int>v;
   for(int i=p;i<=q;i++){
    int fi=0;
       int n=i*i;
       int m=i*i;
       string v=to_string(n);
       int d=v.size();
       int rev=0;
       if(d/2==0){
       while(d/2<0){
           int k=n%10;
           rev=rev+k*10;
           n=n/10;
       }
        fi=m/(10*d/2);}
       else
       {while(d/2<=0){
        int k=n%10;
           rev=rev+k*10;
           n=n/10;   
       }
        fi=m/(10*d/2)+1;}
       int rev2=0;
      while(rev!=0){
           int k=n%10;
           rev2=rev2+k*10;
           rev=rev/10; 
   }
   if(rev2+fi==m){
    v.push_back(i);
   }
}
if(v.size()!=0){
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}
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
