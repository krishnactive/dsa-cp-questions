// #include <bits/stdc++.h>

// using namespace std;

// /*
//  * Complete the 'encryption' function below.
//  *
//  * The function is expected to return a STRING.
//  * The function accepts STRING s as parameter.
//  */

// string encryption(string s) {
// int r=sqrt(s.size());
// int n=s.size();
// int c=0;
// if(n%r==0){
//     c=r;
// }
// else{
//     c=r+1;
//     if(r*c<n){
//     r=c;
// }
// }
// vector<string>m;
// int ex=abs(n-c*r);
// for(int i=0;i<s.size()-ex;){
//     string k;
//     for(int j=i;j<c+i&&i<s.size()-ex;j++,i++){
//         k.push_back(s[i]);
//     }
//     m.push_back(k);
// }
// string k;
// for(int i=s.size()-ex-1;i<s.size()+c-ex;i++){
//     if(i!=s.size()-1){
//     k.push_back(s[i]);}
//     else{
//         k.push_back(' ');
//     }
// }
// m.push_back(k);
// vector<string>mm;
// // if(n==r*c){
// for(int i=0;i<r;i++){
//     string d="";
//     string v=m[i];
//     for(int j=0;j<c+1;j++){
//         d.push_back(m[j][i]);
//         }
//          mm.push_back(d);
//     }
   
// // }
// // else if(n!=r*c){
// // for(int i=0;i<c;i++){
// //     string d;
// //     for(int j=0;j<r;j++){
// //         if(j!=r-2){
// //         d.push_back(m[j][i]);}
        
// //         else if(j==r-2){
// //             d.push_back(m[j][i]);
// //             r=r-1;
// //         }}
// //          mm.push_back(d);
// //     }
   
// // }
// string o;
// for(auto &x:mm){
//     o=o+x+' ';}
//     cout<<o;

// }

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     string s;
//     getline(cin, s);

//     string result = encryption(s);

//     fout << result << "\n";

//     fout.close();

//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;



string e(string s) {
int r=sqrt(s.size());
int n=s.size();
int c=0;
if(n%r==0){
    c=r;
}
else{
    c=r+1;
    if(r*c<n){
    r=c;
}
}
vector<string>m;
int ex=abs(n-c*r);
for(int i=0;i<s.size()-ex;){
    string k;
    for(int j=i;j<c+i&&i<s.size()-ex;j++,i++){
        k.push_back(s[i]);
    }
    m.push_back(k);
}
string k;
for(int i=s.size()-ex-1;i<s.size()+c-ex;i++){
    if(i!=s.size()-1){
    k.push_back(s[i]);}
    else{
        k.push_back(' ');
    }
}
m.push_back(k);
unordered_multiset<string>mm;
// if(n==r*c){
// for(int i=0;i<c;i++){
//     string d;
//     for(int j=0;j<r;j++){
//         d.push_back(m[j][i]);
//         }
//          mm.push_back(d);
//     }
   
// }
// else if(n!=r*c){
for(int i=0;i<c;i++){
    string d;
    for(int j=0;j<r;j++){
        if(i!=r-ex-1){
        d.push_back(m[j][i]);}
        
        else if(i==r-ex-1){
            d.push_back(m[j][i]);
            r=r-ex;
        }}
         mm.insert(d);
    }
   
// }
string o;
//auto x=mm.begin();
for(auto it=mm.begin();it!=mm.end();it++){
    o.push_back(*x.first);
    o.push_back(' ');
} 
return o;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = e(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

