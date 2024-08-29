#include<iostream>
using namespace std;

int main()
{int amount;
cin>>amount;
    float disAmount;
    if(amount>=5000){
        disAmount=amount*(1-20/100.0);
        cout<<disAmount;
    }
    else if(amount>=2000&& amount<5000){
        disAmount=amount*(1-10/100.0);
        cout<<disAmount;
    }
    else if(amount<2000){
        disAmount=amount*(1-5/100.0);
        cout<<disAmount;
    }
    //write nested onditions to print discounted amount 
}