#include<iostream>
using namespace std;
int main()
{

    int guess=69,num;

    cout<<"\nEnter the any number between 1 and 100 ";
    start:
    cout<<"\nenter any number = ";
    cin>>num;

    while (num!=guess)
    {
        if (num>guess)
        {
            cout<<"\nthe number is too high";
            goto start;
        }
        else
        {
            cout<<"\nthe number is too low";
            goto start;
        }   
    }
    cout<<"\nCongrulation you guess the correct number";
    
    return 0 ;
}