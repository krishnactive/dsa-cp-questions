#include<iostream>
#include<string>
using namespace std;
/*int main(){
    string str="Hello";
    cout<<str;
    return 0;
}*/
/*int main(){
    int x,y;
    string str;
    cout<<"Enter a string ";
    getline(cin,str);
    cout<<str<<endl;

    x=str.length();
    y=str.capacity();

    cout<<x<<endl<<y<<endl;

    str.resize(50);

    x=str.length();
    y=str.capacity();

    cout<<"changed"<<endl<<x<<endl<<y;

    return 0;
}*/
/*The size of a string is the number of letters present in the string whereas the capacity is the amount of memory it holds or rather the amount of memory it has reserved for the string so that when we insert more items in the string it will not need to reallocate more memory*/
/*int main(){
    string str=" ";
    if(str.empty()){
        cout<<"String is empty";    
    }
    else cout<<"string is"<<str;
    return 0;
}*/
int main(){
    string str,str2;
    getline(cin,str);
    getline(cin,str2);
    cout<<str<<endl<<str2<<endl;

    //cout<<str.append( str2);
    //str.insert(3,"Apple",2); //at position 3 ,apple in placed by given parameter i.e only 2 element of apple is replaced complete apple is not place
    str.replace(3,1,"apple"); //at position 3 ,apple is placed by removing given lenth of existing string and complete apple is placed
    cout<<str;
    
}


