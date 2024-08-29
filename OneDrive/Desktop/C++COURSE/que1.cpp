// #include<iostream>
// using namespace std;
// int main(){
//     int r1,c1,r2,c2;
//     cout<<"Enter the number of rows and column";
//     cin>>r1>> c1;
//     cout<<"Enter the number of rows and column";
//     cin>>r2>> c2;
//     int A[r1][c1],B[r2][c2];
//     for(int i=0;i<r1;i++)
//     {
//         for(int j=0;j<c1;j++)
//         {   cout<<"matrix A enter value for location"<<"("<<i<<","<<j<<")";
//             cin>>A[i][j];
//         }
        
//     }
//     for(int i=0;i<r2;i++)
//     {
//         for(int j=0;j<c2;j++)
//         {   cout<<"Matrix B enter value for location"<<"("<<i<<","<<j<<")";
//             cin>>B[i][j];
//         }
//     }






//     if(c1==r2)
//     {
//         int C[r1][c2];
//         for (int i=0;i<r1;i++)
//         {   
//             C[0][0]=(A[0][0])*(B[0][0]);
//             for (int j=1;j<c2;j++)
//             {
//                 C[i][j]=--(A[i][j])*(B[i][j]);
//             }
//         }
//         for (int k=0;k<r1;k++){
//         for(int n=0;n<c2;n++)
//         {
//             cout<<C[k][n];
//         }
//         cout<<endl;
//         }
//     }
    
// }
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
            else if(n<=-10&&n>=-99){
                int p=abs(n%10);
                cout<<-p<<endl;
            }
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