#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    string s;
    cin>>s;
    vector<int>ds={0};
    int i=0,xx=0;
    int xy=0,ss=0,j,vv=0;
    while(true){
        if(i>=s.size()-1){
            break;
        }
        if(s[i]=='B'&&s[i+1]=='G'){
            int f=0;
            s[i]='G';
            j=i;
            s[i+1]='B';
            ds.push_back(i);
            vv++;
            xx++;
        }
        else{
            ss++;
        }
         if(ss>1&&vv>=1)
            while(true){
                //j=ds[ds.size()-1];
                if(j<=0){
                    break;
                }
            if(s[j]=='G'&&s[j-1]=='B')
            {
                s[j]='B';
                s[j-1]='G';
                xy++;
            }
            j--;
            if(xy==x){
                j--;
                xy=0;
            }
            }
        i++;
        if(xx==x){
            i++;
            xx=0;
        }
        
    }
    cout<<s;
    return 0;
}