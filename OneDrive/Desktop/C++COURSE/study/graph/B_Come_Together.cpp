#include<bits/stdc++.h>
# define ll long long
# define pb push_back 
# define vec vector<int>
# define in int t; cin>>t; while(t--)
using namespace std;
int main(){
    in{
ll ans=0;
ll xo,yo;
cin>>xo>>yo;
ll bx,by;
cin>>bx>>by;
ll cx,cy;
cin>>cx>>cy;
if(xo>=min(bx,cx)&&xo<=max(bx,cx)){
    if(yo>=min(by,cy)&&yo<=max(by,cy)){
        cout<<1<<"\n";
        goto end;
    }
    else if(yo<min(by,cy)){
        cout<<abs(yo-min(by,cy))+1<<"\n";
        goto end;
    }
    else if(yo>max(by,cy)){
        cout<<abs(yo-max(by,cy))+1<<"\n";
        goto end;
    }
}
else if(xo<min(bx,cx)){
    if(yo>=min(by,cy)&&yo<=max(by,cy)){
        cout<<abs(xo-min(bx,cx))+1<<"\n";
        goto end;
    }
    else if(yo<min(by,cy)){
        cout<<abs(xo-min(bx,cx))+1+abs(yo-min(by,cy))<<"\n";
        goto end;
    }
    else if(yo>max(by,cy)){
        cout<<abs(xo-min(bx,cx))+1+abs(yo-max(by,cy))<<"\n";
        goto end;
    }
}
else if(xo>max(bx,cx)){
    if(yo>=min(by,cy)&&yo<=max(by,cy)){
        cout<<abs(xo-max(bx,cx))+1<<"\n";
        goto end;
    }
    else if(yo<min(by,cy)){
        cout<<abs(xo-max(bx,cx))+1+abs(yo-min(by,cy))<<"\n";
        goto end;
    }
    else if(yo>max(by,cy)){
        cout<<abs(xo-max(bx,cx))+1+abs(yo-max(by,cy))<<"\n";
        goto end;
    }
}

end:
cout<<"";
}
return 0;
}
//This is krishna.