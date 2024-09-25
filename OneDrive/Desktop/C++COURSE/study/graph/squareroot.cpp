#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
          int low = 1;
          int high = 1e4;
          int ans = 0;
          while(low<=high){
              int mid=low+(high-low)/2;
              if(mid*mid<=x){
                  low=mid+1;
                  ans = mid;
              }
              else{
                  high=mid-1;
              }
          }
          return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
