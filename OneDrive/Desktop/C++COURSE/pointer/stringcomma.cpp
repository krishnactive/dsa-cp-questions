/*#include<iostream>
#include <string>
#include<math.h>
using namespace std;
int ver(int n)
{
    int *array;
    cin>>n;
    array=new int[n];
    cin>>*array;;
            //string::iterator it;
    //for(it=str.begin();it!=str.end();it++)
    for(int x:*array)
    {
        cout<<x<<endl;
    }
    return 0;
}
int main(){
    int n;
    return ver(n);   
}*/
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) 
{
	// Complete this function
    stringstream ss(str);
    vector<int> result;
    char ch;
    int tmp;

    while (ss >> tmp) 
    {
        result.push_back(tmp);
        ss >> ch;
    }

    return result;
}

int main() 
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) 
    {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

