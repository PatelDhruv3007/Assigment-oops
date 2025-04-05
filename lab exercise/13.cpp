#include<iostream>
using namespace std;
int fact(double num1)
{
    if (num1!=0)
    {
        return num1*fact(num1-1);
    }
    else
    {
        return 1;
    }   
}
int main()
{
    double num1;
    cout<<"Enter the number 1 valiue = ";
    cin>>num1;

    double ans=fact(num1);
    cout<<"the factorial of "<<num1<<" is = "<<ans;
    return 0 ;
}