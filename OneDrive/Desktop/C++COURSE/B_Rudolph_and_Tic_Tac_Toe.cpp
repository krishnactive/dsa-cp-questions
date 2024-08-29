#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
while(t--){
    string r1,r2,r3;
    cin>> r1>>r2>>r3;
bool d=true;
int ty=0;
    if(r1[0]!= '.'&&r1[0]==r1[1]&&r1[0]==r1[2]) {
        ty++;
        cout <<r1[0]<<'\n';
            d = false;
    } 
    else if(r2[0]!='.'&&r2[0]== r2[1]&&r2[0]==r2[2]) {
        ty++;
        cout <<r2[0]<<'\n';
        d = false;
    } 
    else if(r3[0] != '.'&&r3[0]==r3[1]&&r3[0]==r3[2]) {
        ty++;
        cout<<r3[0]<< '\n';
        d= false;
    }

    // else for(int i = 0; i<3;i++) {
    //     if(r1[i]!= '.' && r1[i]== r2[i] &&r1[i]== r3[i]) {
    //         ty++;
    //         if(ty!=1){
    //              cout<<"DRAW"<<'\n';
    //              goto end;
    //         }
    //         else
    //         cout<<r1[i]<<'\n';
    //         d = false;
    //     }
    // }

    else if(r1[0]!= '.' && r1[0] ==r2[1]&&r1[0]==r3[2]) {
        ty++;
            if(ty!=1){
                 cout<<"DRAW"<<'\n';
                 goto end;
            }
        cout <<r1[0]<<'\n';
        goto end;
        d = false;
    } 
    else if(r1[2]!= '.' && r1[2]==r2[1] &&r1[2]==r3[0]) {
        ty++;
            if(ty!=1){
                 cout<<"DRAW"<<'\n';
                 goto end;
            }
        cout << r1[2]<<'\n';
        goto end;
        d = false;
    }
    else for(int i = 0; i<3;i++) {
        if(r1[i]!= '.' && r1[i]== r2[i] &&r1[i]== r3[i]) {
            ty++;
            if(ty!=1){
                 cout<<"DRAW"<<'\n';
                 break;
                 //goto end;
            }
            else
            cout<<r1[i]<<'\n';
            //goto end;
            d = false;
            break;
        }
    }

    if(d&&ty==0){
        cout<<"DRAW"<<'\n';
        
    }
    end:
    cout<<"";
}
    return 0;
}
