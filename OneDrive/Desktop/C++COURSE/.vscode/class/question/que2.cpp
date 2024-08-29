#include<iostream>
using namespace std;
int main(){
    
        int n;
        cin>>n;
        if(n>=0){
            cout<<n<<endl;
        }
        else{
            if(n>-10){
                cout<<0<<endl;
            }
            // else if(n<=-10&&n>=-99){
            //     int p=abs(n%10);
            //     cout<<-p<<endl;
            // }
            else{
                int p=abs(n%10);
                int l=abs(n%100);
                int d=l/10-p;
                if(d>=0){
                    int k=abs(n/100);
                    cout<<-(k*10+p)<<endl;
                }
                else{
                    int k=abs(n/10);
                    cout<<-k<<endl;
                }
            }
            
        }
        
    
}
//test case 39 fails