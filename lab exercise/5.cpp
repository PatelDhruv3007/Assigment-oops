#include<iostream>
using namespace std;
int main()
{
    int num1=100;
    const double p=3.33;
    cout<<"\nValue of num1="<<num1;
	cout<<"\nValue of p="<<p;
    num1=40;
    cout<<"\nUpdated value of num1 = "<<num1;
    return 0 ;
}