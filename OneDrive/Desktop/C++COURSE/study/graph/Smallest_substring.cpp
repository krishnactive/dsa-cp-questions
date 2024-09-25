#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
	string s;
	cin>>s;
	vector<int>ar(25);
    int count = 0;
	for(auto x:s){
		ar[x-'a']++;
	}
	for(auto x:ar){
        if(x!=0) count ++;
    }
    cout<<count;
    
}