#include<iostream>
using namespace std;
int main()
{
    string str,rev;
    int i,j=0,length =0,count=0;

    cout<<"\nEnter the string = ";
    cin>>str;

    for ( i = 0; str[i]!='\0' ; i++)
    {
        length++;
    }
    for ( i = length-1; i >= 0; i--)
    {
        rev[j]=str[i];
        j++;

    }
    rev[j]!='\0';
    for ( i = 0; str[i]!='\0'; i++)
    {
        if (str[i] != rev[i])
        {
            count++;
        }
        
    }
    if (count == 0)
    {
        cout<<"This is palindrom";
    }
    else
    {
        cout<<"This is not palindrom";
    }
    
    
    
    
    
    return 0 ;
}