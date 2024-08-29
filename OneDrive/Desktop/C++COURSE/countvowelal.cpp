#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int vowel=0,word=0,c=0,any=0;
    cout<<"Enter string ";
    getline(cin,str);
    for ( int j=0;str[j]!='\0';j++)
    {
        
            if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'||str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U')
            {
                vowel++;
            }
            else if (str[j]==' ')
            {
                word++;
                if(str[j]==str[j-1])
                {
                    word--;
                }
                
            }
            else if(str[j]>=65&&str[j]<=90||str[j]>=97&&str[j]<=122)
            {
                c++;
            }
            else
            {
                any++;
            }
        
    }
    cout<<"vowels are "<<vowel<<endl<<"words are "<<word+1<<endl<<"consonants are "<<c<<endl<<"any other element "<<any;
    return 0;

}