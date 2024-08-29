#include<iostream>
using namespace std;
int main(){
    int days,year,week;
    cin>>days;
    year=days/365;
    week=(days%365)/7;
    days=(((days%365)%7));
    cout<<year<<"/"<<week<<"/"<<days;
    return 0;

    }
    