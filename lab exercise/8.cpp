#include<iostream>
using namespace std;
int main()
{
    int sub,i,m[100],sum=0;
    cout<<"Enter the total subject = ";
    cin>>sub;

    for ( i = 0; i < sub; i++)
    {
        cout<<"\nEnter thee marks of sub "<<i+1<<" = ";
        cin>>m[i];
    }
    for ( i = 0; i < sub; i++)
    {
        sum = sum +m[i];
    }
    
    int avg = (double)sum/sub;
    cout<<"the average is = "<<avg;

    if (avg>=90)
    {
        cout<<"\ngrade is = A";
    }
    else if (avg>=70)
    {
        cout<<"\ngrade is = B";
    }
    else if (avg>=60)
    {
        cout<<"\ngrade is = C";
    }
    else if (avg>=50)
    {
        cout<<"\ngrade is = D";
    }
    else
    {
        cout<<"\ngrade is = F";
    }
    
    return 0 ;
}   