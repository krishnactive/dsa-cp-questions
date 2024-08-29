#include <iostream>
#include<vector>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int sum=0;
		int n;
		cin>>n;
		vector<int>nn;
		for(int i=1;i*i<=n;i++){
			if(n%i==0){
				nn.push_back(i);
			}
		}
		for(int i=0;i<nn.size();i++){
			for(int j=i+1;j<nn.size()-1;j++){
				sum=sum + nn[i]*nn[j];
			}
            cout<<sum<<endl;
		}
		cout<<sum<<endl;
	}
	return 0;
}