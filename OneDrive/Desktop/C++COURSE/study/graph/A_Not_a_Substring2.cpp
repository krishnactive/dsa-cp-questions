#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
unordered_map<char,int>symbols={{'(',-1},{')',1}};
bool balanced(string s){
    stack<char>st;
    for(char bracket:s){
        if(symbols[bracket]<0){
            st.push(bracket);
        }
        else{
        if(st.empty()) return false;
        char top=st.top();
        st.pop();
        if(symbols[top]+symbols[bracket]!=0){
            return false;
        }
    }
    }
    if(st.empty()) return true;
    return false;
    
}


int main(){
    in{
string s;
cin>>s;
int a=0;
int b=0;
int le=s.size();


if(balanced(s)) cout<<"NO\n";
else{
    int ac=0,jj=0,bc=0;
for(int i=0;i<le;i++){
    if(s[i]=='('){
        ac++;
        jj=i;
    }
    else{
        break;
    }
}
for(int i=jj+1;i<le;i++){
    if(s[i]==')'){
        bc++;
    }
    else{
        break;
    }
}



if((le&1)==1){

if(ac+bc!=le){
    cout<<"YES\n";
    for(int i=1;i<=le;i++){
        cout<<"(";
    }
    for(int i=1;i<=le;i++){
        cout<<")";
    }
    cout<<"\n";
}
else{

    if(bc==1||ac==1){
         cout<<"YES\n";
    for(int i=1;i<=le;i++){

        cout<<"()";
    }
    cout<<"\n";
    
}

//   else if(ac!=1&&bc==1){
//     cout<<"YES\n";
//     for(int i=1;i<=le-1;i++){
//         cout<<"(";
//     }
//     cout<<")(";
//     for(int i=1;i<=le-1;i++){
//         cout<<")";
//     }
//     cout<<"\n";
// }


else{
   cout<<"YES\n";
    for(int i=1;i<=le-1;i++){
        cout<<"(";
    }
    cout<<")(";
    for(int i=1;i<=le-1;i++){
        cout<<")";
    }
    cout<<"\n";
}
}
}
else{
     int co=0,co2=0;
    for(int i=0;i<le/2;i++){
        if(s[i]=='('){
            co++;
        }
    }
    for(int i=le/2;i<le;i++){
        if(s[i]==')'){
            co2++;
        }
    }
    if(co%2==0&&co2%2==0&&co!=0&&co2!=0&&ac!=0&&bc!=0||le==4&&co==1&&co2==1&&ac!=0&&bc!=0){
        cout<<"NO\n";
    }

    else{
        if(bc+ac!=le){
        cout<<"YES\n";
        for(int i=1;i<=le;i++){
            cout<<'(';
        }
        for(int i=1;i<=le;i++){
            cout<<')';
        }
        cout<<"\n";
    }
    else{
        if(le!=2){
            if(bc==1||ac==1){

        cout<<"YES\n";
        for(int i=1;i<=le;i++){
            cout<<"()";
        }
        cout<<"\n";

         
    }

    // else if(ac!=1){
    //      cout<<"YES\n";
    // for(int i=1;i<=le-1;i++){
    //     cout<<"(";
    // }
    // cout<<")(";
    // for(int i=1;i<=le-1;i++){
    //     cout<<")";
    // }
    // cout<<"\n";
    // }


    else{
        cout<<"YES\n";
    for(int i=1;i<=le-1;i++){
        cout<<"(";
    }
    cout<<")(";
    for(int i=1;i<=le-1;i++){
        cout<<")";
    }
    cout<<"\n";
    }
    }
    else{
        cout<<"NO\n";
    }

}
}
}
}
}
return 0;
}
//This is krishna.