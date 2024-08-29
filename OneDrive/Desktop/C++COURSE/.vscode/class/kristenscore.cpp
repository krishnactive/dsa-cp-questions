/*int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
//class student
//{
    //public:
        int marks()
        {   int *array,n,sum=0,a,count;
            cin>>n;
            array=new int[n*5];
            for(int i=0;i<n;i++)
                { 
                    cin>>array[i*5];
                    sum=sum+array[i*5];
                    {
                        if(sum>a)
                        {
                            a=sum;
                            count++;
                        }
                    }
                   // cin>>a[0]>>a[1]>>a[2]>>a[3]
                }
         cout<<count;
         return 0;       
        }
        
        
//};
int main()
{
    //student;
    return marks();
}
