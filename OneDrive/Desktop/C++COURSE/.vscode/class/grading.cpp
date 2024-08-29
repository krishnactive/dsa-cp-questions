#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) {
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    grades.push_back(x);
}
for (int &value:grades){
    if(value<38){
        cout<<value<<endl;
    }
    else if(value>=38){
        int x;
        x=value/5;
        if(5*(x+1)-value<3){
            value=5*(x+1);
            cout<<value<<endl;
        }
        else{
            cout<<value<<endl;
        }
    }
    else{
        cout<<value<<endl;
    }
}
return grades;

}

int main()
{
    vector<int>s;
    gradingStudents(s);
    return 0;
}