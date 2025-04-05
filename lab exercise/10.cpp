#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"\nenter the number = ";
    cin>>num;

    for (i = 0; i <=10; i++)
    {
        cout<<"\n"<<num<<" x "<<i<<" = "<<num*i;
    }
    
    return 0 ;
}